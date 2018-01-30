/*Alex Kastanek
Scans user input for value address and prints value
Lab 9: Assignment 1*/

#include <stdio.h>

int main(void) {

	long input_number = 10;
	long* long_pointer = &input_number;
	//long_pointer = &input_number;
	scanf("%ld", long_pointer);
	printf("%ld\n", input_number);

return 0;
}
