/*Alex Kastanek
Switches the 4th value of a 5 value array with another
Lab 9: Assignment 2*/

#include <stdio.h>

int main(void) {

	int array1[5] = {1, 2, 3, 4, 5}, array2[5] = {6, 7, 8, 9, 10};
	int* array1Pointer = &array1[3]; 
	int* array2Pointer = &array2[3];
	int temp;
	int i;

	printf("Your first array is:");
	for(i = 0; i < 5; i++) {
	printf("%3d", array1[i]);
	}
	printf("\n");
	
	printf("Your second array is:");
	for(i = 0; i < 5; i++) {
	printf("%3d", array2[i]);
	}
	printf("\n");

	temp = *array1Pointer;
	array1[3] = *array2Pointer;
	array2[3] = temp;

	printf("Your first array is:");
	for(i = 0; i < 5; i++) {
	printf("%3d", array1[i]);
	}
	printf("\n");
	
	printf("Your second array is:");
	for(i = 0; i < 5; i++) {
	printf("%3d", array2[i]);
	}
	printf("\n");

return 0;
}
