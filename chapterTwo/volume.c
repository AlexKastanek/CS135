/********************************/
/*Volume*************************/
/*Calculates the volume of a box*/
/*Alex Kastanek******************/
/********************************/

#include <stdio.h>

int main(void)
{
	int length, width, height, volume, weight;	

	printf("Enter the length of the box: ");
	scanf("%d", &length);
	printf("Enter the width of the box: ");
	scanf("%d", &width);
	printf("Enter the height of the box: ");
	scanf("%d", &height);
	volume = height * length * width;
	weight = (volume + 165) / 166;

	printf("The volume of the box is %d cubic units.\n", volume);
	printf("The weight of the box is about %d pounds.\n", weight);

return 0;
}

		
