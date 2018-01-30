/*Alex Kastanek
Magic Square
Attempts to make a 9x9 magic square
*/

#include <stdio.h>

int main(void) {
	int arr[9][9] = {0}; 
	int i, j, x = 0, y = 4, n = 1;
	int nPosition[x][y];
	
	/*for(i = 0; i < 9; i++) {
		for(j = 0; j < 9; j++) {
			printf("%3d", n);
		}
		printf("\n");
	}
	*/
	i = 0;
	j = 0;
	for(n = 1; n < 82; n++) {
		if(x < 0) {
			x = 8;
			if ((arr[x][y]) > n) {
				y--;
			}
		}	 
		if (y < 0) {
			y = 8;
		}
		arr[x][y] = n;
		x--;
		y++;
			
	}
	printf("\n");
	
	for (i = 0; i < 9; i++) {
			for (j = 0; j < 9; j++) {
				printf("%3d", arr[i][j]);
			}
			printf("\n");
	}

	/*for(x = 0; x < 9; x++) {
		for(y = 0; y < 9; y++) {
			printf("%3d", arr[x][y]);
		}
		printf("\n");
	}*/

return 0;
}
