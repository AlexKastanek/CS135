#include <stdio.h>

int global[100][100];

int read_row(int rowCounter, int colCounter) {

	int val;

	if (colCounter == 0) {
		printf("Enter row %d of array: ", rowCounter);
	}

	scanf("%d", &val);
	
return val;
}

int format_row(int currentValue, int rowNum, int colNum) {

	global[rowNum][colNum] = currentValue;
	//printf("%3d", global[rowNum][colNum]); debugging

return 0;
}

int print_array(int numOfRows, int numOfCols, int newLineNum, int elementSpan, char justification, char charBetween, int maxSpan) {

	int i = 0, j = 0, k = 0;
	
	if (justification == 'l') {
		for (i = 0; i < numOfRows; i++) {	
			for (j = 0; j < numOfCols; j++) {
				printf("%d", global[i][j]);
				if (j != (numOfCols - 1)) {
					printf("%c", charBetween);
				}
				for (k = 0; k <= (elementSpan - 2); k++) {
					printf(" ");
				} 
			}
			for (j = 0; j <= newLineNum; j++) {
				printf("\n");
			}
		}
	} else if (justification == 'r') {
		for (i = 0; i < numOfRows; i++) {	
			for (j = 0; j < numOfCols; j++) {
				for (k = 0; k <= (elementSpan - 2); k++) {
					if (k == 0 && j != 0) {
						printf("%c", charBetween);
					} else printf(" ");
				}
				printf("%3d", global[i][j]);
			}
			for (j = 0; j <= newLineNum; j++) {
				printf("\n");
			}
		}
	}

return 0;
}

int check_formatting(int newLineNum, int elementSpan, int maxSpan, char justification) {

	if (newLineNum < 0) {
		printf("Invalid number of new lines.\n");
		return 0;
	} else if (elementSpan < 0) {
		printf("Invalid span of each array element.\n");
		return 0;
	} else if (maxSpan > elementSpan) {
		printf("The array contains elements longer than %d digits long.\n", elementSpan);
		//printf("%d\n", maxSpan); debugging
		return 0;
	} else if (justification != 'l' && justification != 'r') {
		printf("Justification cannot be determined\n");
		return 0;
	} else return 1;

}

int main(void) {

	int n = 0, m = 0, rowCounter = 0, colCounter = 0, a[n][m], i = 0, j = 0, currentValue;
	int maxColumns, maxRows, newLineNum, elementSpan, numSize, tempSize = 0, maxSpan = 1;
	char justification, charBetween, checkFormatting = 1;

	printf("Enter the size of your array: ");
	scanf("%d %d", &n, &m);

	maxColumns = m;
	maxRows = n;

	do {
		printf("Enter the number of new lines between rows: ");
		scanf("%d", &newLineNum);

		printf("Enter the span of each array element: ");
		scanf("%d", &elementSpan);

		printf("Enter the type of justification (l - left, r - right): ");
		scanf(" %c", &justification);

		printf("Enter the character to be placed between elements: ");
		scanf(" %c", &charBetween);

		for (rowCounter = 0; rowCounter < n; rowCounter++) {
			for (colCounter = 0; colCounter < m; colCounter++) {
				a[rowCounter][colCounter] = read_row(rowCounter, colCounter);
				currentValue = a[rowCounter][colCounter];
				while (currentValue > 9) {
					numSize++;
					currentValue = currentValue / 10;
					if (numSize > tempSize) {
						maxSpan++;
					}
				}
				tempSize = numSize;
				numSize = 0;
				format_row(currentValue, rowCounter, colCounter);
			}
		}
			
		checkFormatting = check_formatting(newLineNum, elementSpan, maxSpan, justification);
	} while (checkFormatting == 0);

	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Your formatted array is:\n\n");
	print_array(maxRows, maxColumns, newLineNum, elementSpan, justification, charBetween, maxSpan);

return 0;
}
