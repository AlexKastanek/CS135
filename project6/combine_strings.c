/* Alex Kastanek
Combine_Strings
Combines strings in one of two ways depending on what the user passes as an argument. It will either intersperse the string or it will concatenate it and widen it by putting asterisks inbetween characters*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *intersperse(char s1[], char s2[]);

char *widen_stars(char s1[], char s2[]);

int main(int argc, char *argv[]) {

	int i, j, checkArg[2], checkReady = 0;
	char *check[1];
	char stringOne[32], stringTwo[32];
	check[1] = argv[1] + 1;
	//printf("%s, %d, %d\n", check[1], *check[1], *argv[1]); debugging
	checkArg[1] = *argv[1];
	checkArg[2] = *check[1];

	if (argc == 2) {
		if (checkArg[1] == 45 && checkArg[2] == 105) {
			checkReady = 1;
		} else if (checkArg[1] == 45 && checkArg[2] == 119) {
			checkReady = 1;
		} else {
			printf("Error: Not a valid argument, please enter either -i or -w\n");
			//printf("%s\n", argv[1]); debugging
			exit(0);
		}
	} else if (argc > 2) {
		printf("Please specify only one argument\n");
	} else printf("Please specify one argument as either -i or -w\n");

	if (checkReady == 1) {
		printf("Please enter a string of maximum 30 characters: ");
		scanf(" %30s", stringOne);
		printf("Please enter another string of maximum 30 characters: ");
		scanf(" %30s", stringTwo);
	}

	if (checkArg[2] == 105) {
		intersperse(stringOne, stringTwo);
	} else if (checkArg[2] == 119) {
		widen_stars(stringOne, stringTwo);	
	}
}

char *intersperse(char s1[32], char s2[32]) {

	int searchS1 = 0, searchS2 = 1, len1, len2, lenFinal, sDif, difCount, i, j;
	char currentChar1, currentChar2;
	char *sFinal = malloc(64);

	len1 = strlen(s1);
	len2 = strlen(s2);
	//printf("%d, %d\n", len1, len2); debugging
	
	for (i = 0; i < len1; i++) {
		currentChar1 = s1[i];
		if (currentChar1 == '\n' || currentChar1 == '\0') {
			//sFinal[searchS1] = '\0'; not needed
		} else {
			sFinal[searchS1] = currentChar1;
			searchS1 = searchS1 + 2;
		}			
	}

	for (j = 0; j < len2; j++) {
		currentChar2 = s2[j];
		if (currentChar2 == '\n' || currentChar2 == '\0') {
			//sFinal[searchS2] = '\0'; not needed
		} else {
			sFinal[searchS2] = s2[j];
			if (s1[j] == len2 - 2) {
				searchS2++;
			} else {
				searchS2 = searchS2 + 2;
			}
		}
	}

	lenFinal = strlen(sFinal);
	//printf("%d\n", lenFinal); debugging

	if (len1 > len2) {
		sDif = len1 - len2 - 1;
		printf("%d\n", sDif);
		difCount = lenFinal - len2;
		for (i = lenFinal; i < (lenFinal + sDif); i++) {
			sFinal[i] = s1[difCount++];
		}
		if (len2 % 2 != 0) {
			sFinal[i] = '\0';
		}
	}

	if (len2 > len1) {
		sDif = len2 - len1;
		//printf("%d\n", sDif); debugging
		difCount = lenFinal - len1;
		for (j = lenFinal; j < (lenFinal + sDif); j++) {
			sFinal[j] = s2[difCount++];
		}
		if (len1 % 2 != 0) {
			sFinal[j] = '\0';
		}
	}

	printf("The combined string is: %s\n", sFinal);
	free(sFinal);

}

char *widen_stars(char s1[32], char s2[32]) {

	int len1, len2, totalLen, finalLen, makeString = 0, i;
	char *sFinal = malloc(64);

	len1 = strlen(s1);
	len2 = strlen(s2);

	strcat(s1, s2);
	totalLen = strlen(s1);
	//printf("%d\n", totalLen); debugging

	for (i = 0; i < totalLen; i++) {
		sFinal[makeString] = s1[i];
		makeString++;
		sFinal[makeString] = '*';
		makeString++;
	}

	finalLen = strlen(sFinal);
	//printf("%d\n", finalLen); debugging
	sFinal[finalLen - 1] = '\0';

	printf("The combined string is: %s\n", sFinal);
	free(sFinal);

}
