#include <stdio.h>

float calcSlope(int x1, int x2, int y1, int y2) {

	int slope;
	slope = (y2 - y1) / (x2 - x1);

return slope;
}

float calcIntercept(int x, int y, int slope) {

	int intercept;
	intercept = y - (slope * x);

return intercept;
}

int main(void) {

	int slope;
	int intercept;
	int x1, x2, y1, y2, x, y;

	printf("Coordinates of first point using a space to separate them: ");
	scanf("%d %d", &x1, &y1);
	printf("Coordinates of second point using a space to separate them: ");
	scanf("%d %d", &x2, &y2);

	slope = calcSlope(x1, x2, y1, y2);

	x = x1;
	y = y1;

	intercept = calcIntercept(x, y , slope);

	printf("Your equation is y = %dx + %d\n", slope, intercept);

return 0;
}
