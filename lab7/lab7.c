/*Alex Kastanek*/
/*Lab Assignment 1*/
/*Randomizes numbers in a 9x9 box and then displays the sum of each row as well as each column*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {

	int arr[9][9], colSum[9] = {0}, rowSum[9] = {0}, i, j;
	srand(time(NULL));

	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			arr[i][j] = rand()%100;
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Row sums:\n");
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			rowSum[i] += arr[i][j];
		}
		printf("%5d\n", rowSum[i]);
	}
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Column sums: \n");
	for (j = 0; j < 9; j++) {
		for (i = 0; i < 9; i++) {
			colSum[j] += arr[i][j];
		}
		printf("%5d", colSum[j]);
	}
	printf("\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

return 0;
}
