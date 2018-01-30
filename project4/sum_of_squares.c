/*Alex Kastanek
Sum of Squares
Prints the sum of the squared numbers of number range  {1, n}, n being user input.*/

#include <stdio.h>

int sum_squares(int n, int sum) {

	if (sum >= n) {
		return (sum + (n * n));
	} else return ((sum * sum) + sum_squares(n, (sum + 1)));

}

int main(void) {

	int n, sum = 1;

	printf("Please enter the value n for the sum of squared series: ");
	scanf("%d", &n);
	
	sum = sum_squares(n, sum);

	if (n >= 0) {
		sum = sum - n;
	}

	printf("The sum of squares from 1 to %d is: %d\n", n, sum);

return 0;
}
