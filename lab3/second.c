/* Alex Kastanek */
/* Prompts the user for three integers and then displays what value the smallest integer has and what value the largest integer has */

#include <stdio.h>

int main(void)
{
	int firstInt, secondInt, thirdInt, largestInt, smallestInt;
	
	printf("Please enter an integer ");
	scanf("%d", &firstInt);
	printf("Please enter another integer ");
	scanf("%d", &secondInt);
	printf("Please enter a third integer ");
	scanf("%d", &thirdInt);

	if (firstInt > secondInt && firstInt > thirdInt) (
		largestInt = firstInt
	); else if (secondInt > firstInt && secondInt > thirdInt) (
		largestInt = secondInt
	); else if (thirdInt > firstInt && thirdInt > secondInt) (
		largestInt = thirdInt
	);

	if (firstInt < secondInt && firstInt < thirdInt) (
		smallestInt = firstInt
	); else if (secondInt < firstInt && secondInt < thirdInt) (
		smallestInt = secondInt
	); else if (thirdInt < firstInt && thirdInt < secondInt) (
		smallestInt = thirdInt
	);

	printf("The smallest integer is %d and the largest integer is %d.\n", smallestInt, largestInt);

return 0;
}
