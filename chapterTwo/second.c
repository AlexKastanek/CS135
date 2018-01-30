#include <stdio.h>

int main(void)
{
	int wholeNumber, firstNumber, cutoff, secondNumber, lastNumber;

	printf("Enter a three-digit number: ");
	scanf("%d", &wholeNumber);
	firstNumber = wholeNumber / 100;
	cutoff = wholeNumber % (firstNumber * 100);
	secondNumber = cutoff / 10;
	lastNumber = cutoff % (secondNumber * 10);

	printf("The first digit is %d and the third digit is %d.\n", firstNumber, lastNumber);

return 0;
}
