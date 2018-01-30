/*Alex Kastanek
Count Digits
This program counts how many of each digit are in a user-made multidimensional array.*/

#include <stdio.h>

int read_row(int rowCounter, int colCounter) {

	int val;

	if (colCounter == 0) {
		printf("Enter row %d of array: ", rowCounter);
	}

	scanf("%d", &val);
	
return val;
}

int check_input(int input) {

	if (input > 9 || input < 0) {
		return 0;
	} else return 1;

}

int compute_row_count(int val, int count[val]) {

	count[val] = count[val] + 1;

return count[val];
}

int print_total_count (int val, int count[val]) {

	if (count[val] == 1) {
		printf("Digit %d occurs %d time\n", val, count[val]);
	} else {
		printf("Digit %d occurs %d times\n", val, count[val]);
	}

return 0;
}

int main(void) {

	int n = 0, m = 0, rowCounter = 0, colCounter = 0, a[n][m], i = 0, j = 0, currentValue;
	int digitCount[9] = {0};

	printf("Enter the size of your array: ");
	scanf("%d %d", &n, &m);
	
	for (rowCounter = 0; rowCounter < n; rowCounter++) {
		for (colCounter = 0; colCounter < m; colCounter++) {
			a[rowCounter][colCounter] = read_row(rowCounter, colCounter);
			currentValue = a[rowCounter][colCounter];
			if (check_input(currentValue) == 0) {
				for (colCounter; colCounter < m; colCounter++) {
					a[rowCounter][colCounter] = 0;
				}
				printf("Values outside of range.\n");
				rowCounter--;
			} else {
				digitCount[currentValue] = compute_row_count(currentValue, digitCount);
			}
			//printf("%3d", a[rowCounter][colCounter]); debugging
		}
	}

	/*debugging:
	printf("%d,%d\n", n, m); 
	printf("%d,%d\n", rowCounter, colCounter);*/
	rowCounter = 0;
	colCounter = 0;
	
	printf("\n");
	printf("Total count for each digit:\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	for (i = 0; i < 10; i++) {
		print_total_count(i, digitCount);
	}
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

return 0;
}
