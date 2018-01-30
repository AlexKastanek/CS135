#include <stdio.h>

int main(void)
{
	float loan, interestRate, monthlyPay, firstPay, secondPay, thirdPay, monthlyRate;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &interestRate);
	printf("Enter monthy payment: ");
	scanf("%f", &monthlyPay);

	monthlyRate = ((interestRate * 0.01f) / 12.0f);
	firstPay = (loan - (monthlyPay - loan * monthlyRate));
	secondPay = (firstPay - (monthlyPay - firstPay * monthlyRate));
	thirdPay = (secondPay - (monthlyPay - secondPay * monthlyRate));

	printf("Your balance after the first month is $%.2f.\n", firstPay);
	printf("Your balance after the second month is $%.2f.\n", secondPay);
	printf("Your balance after the third month is $%.2f.\n", thirdPay);

return 0;
}
