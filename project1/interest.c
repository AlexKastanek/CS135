/* Interest                                                                                            */
/* Determines the value of user's principal, plus interest compounded annually each year for 20 years. */
/* Alex Kastanek                                                                                       */

#include <stdio.h>

int main(void)
{
	int yearNumber;
	float principal, annualInterestRate;

	printf("Please enter the amount of principal and interest percentage: ");
	scanf("%f %f", &principal, &annualInterestRate);

	while (yearNumber < 20) {
		yearNumber = yearNumber + 1;
		principal = principal + principal * annualInterestRate * .01;
		printf("Year %d - $%.2f\n", yearNumber, principal);
	}

return 0;
}
