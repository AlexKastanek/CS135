/* Convert                                      */
/* Converts miles per hour to meters per second */
/* Alex Kastanek                                */

#include <stdio.h>

int main(void)
{
	float spdMph, spdMps;
	
	printf("Please enter a speed in miles per hour: ");
	scanf("%f", &spdMph);

	spdMps = spdMph * 1.609344f / 3.6f;
	printf("%.0f mph is %.3f m/s\n", spdMph, spdMps);

return 0;
}
