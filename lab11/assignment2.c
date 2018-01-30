/* Alex Kastanek
Lab 11 Assignment 2
Transposes a 3x3 matrix and displays the sum of each row and column of original matrix*/

#include <stdio.h>

#define N 3

int main(void) {

	int arr[N][N], transpose[N][N];
	int rowSum[N] = {0}, colSum[N] = {0};
	int i, j;

	for (i = 0; i < N; i++) {
		printf("Enter 3 numbers for row %d: ", i); 
		for (j = 0; j < N; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			rowSum[i] += arr[i][j];
		}
	}

	printf("The sum of each row is: \n");
	for (i = 0; i < N; i++) {
		printf("%3d", rowSum[i]);
	}
	printf("\n");

	for (j = 0; j < N; j++) {
		for (i = 0; i < N; i++) {
			colSum[j] += arr[i][j];
		}
	}
	
	printf("The sum of each column is: \n");
	for (i = 0; i < N; i++) {
		printf("%3d", colSum[i]);
	}
	printf("\n");

	for (j = 0; j < N; j++) {
		for (i = 0; i < N; i++) {
			transpose[j][i] = arr[i][j];
		}
	}

	printf("The transpose of the matrix is: \n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("%3d", transpose[i][j]);
		}
		printf("\n");
	}

return 0;
}
