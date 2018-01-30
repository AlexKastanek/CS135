/* Alex Kastanek
Data Storage
Stores data in either a read and write text file. The program will prompt the user for an array of numbers or an array of strings depending on what the user enters as parameters. The array will either overwrite an existing file, append to an existing file, or write to a new file depending on what the user enters as parameters.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

	FILE *fs;
	int size, checkReady1 = 0, checkReady2 = 0;
	char *s, *check[3]; 

	check[0] = argv[1];
	check[1] = argv[1] + 1;
	check[2] = argv[2];
	check[3] = argv[2] + 1;

	//printf("%d, %d, %d, %d\n", *check[0], *check[1], *check[2], *check[3]);

	if (argc != 4) {
		printf("Error: Invalid Entry. Please enter exactly 3 arguments after entering the run program command\n");
		exit(0);
	}

	if (*check[0] == 45 && *check[2] == 45) {
		if (*check[1] != *check[3]) {
			switch (*check[1]) {
				case 99 :
					//printf("You will be storing a string of characters\n");
					checkReady1 = 1;
					break;
				case 110 :
					//printf("You will be storing a string of numbers\n");
					checkReady1 = 2;
					break;
				case 111 :
					//printf("You will be appending this data to a file\n");
					checkReady2 = 1;
					break;
				case 97 :
					//printf("You will be overwriting this data to a file\n");
					checkReady2 = 2;
					break;
				default :
					printf("Error: Invalid Entry3\n");
					exit(0);
			}
			switch (*check[3]) {
				case 99 :
					//printf("You will be storing a string of characters\n");
					checkReady1 = 1;
					break;
				case 110 :
					//printf("You will be storing a string of numbers\n");
					checkReady1 = 2;
					break;
				case 111 :
					//printf("You will be appending this data to a file\n");
					checkReady2 = 1;
					break;
				case 97 :
					//printf("You will be overwriting this data to a file\n");
					checkReady2 = 2;
					break;
				default :
					printf("Error: Invalid Entry4\n");
					exit(0);
			}
		} else {
			printf("Error: Invalid Entry2\n");
			exit(0);
		}
	} else {
		printf("Error: Invalid Entry1\n");
		exit(0);
	}

	if (checkReady1 == 1) {
		printf("Please enter the size of the character array: ");
		scanf("%d", &size);
		s = (char *) malloc(size + 1);
		printf("Please enter the string (no spaces): ");
		scanf("%s", s);
		if (checkReady2 == 1) {
			fs = fopen(argv[3], "w+");
		} else if (checkReady2 == 2) {
			fs = fopen(argv[3], "a+");
		}
		if (fs == NULL) {
			printf("Error: Could not open file.\n");
			exit(0);
		} else printf("Your file is ready!\n");
		fprintf(fs, "%s", s);
		//free(s);
	} else if (checkReady1 == 2) {
		printf("Please enter the size of the numbers array: ");
		scanf("%d", &size);
		s = (char *) malloc(size + 1);
		printf("Please enter the numbers (no spaces): ");
		scanf("%s", s);
		if (checkReady2 == 1) {
			fs = fopen(argv[3], "wb+");
		} else if (checkReady2 == 2) {
			fs = fopen(argv[3], "ab+");
		}
		if (fs == NULL) {
			printf("Error: Could not open file.\n");
			exit(0);
		} else printf("Your file is ready!\n");
		fprintf(fs, "%s", s);
		//free(s);
		}
	
	free(s);
	return 0;
}
