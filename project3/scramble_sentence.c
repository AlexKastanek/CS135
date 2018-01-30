/*Alex Kastanek
Sentence Scrambler
Scrambles letters of each word user inputs*/

#include<stdio.h>

int main()
{
	char a[100] = {0}, b[100] = {0}, c[100] = {0}, d[100] = {0};
	int i = 0, j = 0, k = 0, r = 0, lettersPerWord = 0, wordCount = 1, charCount = 0;

	printf("Please enter a sentence ending with a '.' '!' or '?': ");
	while ((a[i]=getchar()) != '\n') /* take input from user until it's a newline or equal to 10 */ {
		b[i] = a[i];
		i = i + 1;
	}	

	a[i] = b[i] = '\0'; /* null-terminate the string */
	i = 0; 

	while(a[i] != '\0') {
		//putchar(a[i++]);
		i++;
	}

	i = 0;
	//printf("\n");

	while(b[i] != '\0') {
		//putchar(b[i++]);
		i++;
	}

	//printf("\n");

	for (i = 0; i < 100; i++) {
		charCount = j;
		if (a[i] == ' ') {
			wordCount++;
		}
		if (b[i] == ' ' || b[i] == '.' || b[i] == '!' || b[i] == '?') {
			lettersPerWord = i - j;
			while (j < i) {
				//putchar(b[j++]);
				j++;
			}
			k = 0;
			while (k < lettersPerWord) {
					c[k] = b[(i - lettersPerWord) + k];
					//printf(", ");
					//putchar(c[k++]);
					k++;
					//printf(", %d", lettersPerWord);
					//printf(", %d", k);
			}
			k = 0;
			if (i > lettersPerWord) {
				printf(" ");
			}
			if (lettersPerWord < 2) {
				d[k] = c[k];
			} else {
				d[0] = c[(lettersPerWord)];
				d[1] = c[(lettersPerWord - 2)];
				d[2] = c[(lettersPerWord - 1)];
				while (k < (lettersPerWord + 1)) {
					if (k >= 2) {
						d[(k + 1)] = c[(k - 2)];
					}
					if (d[k] != ' ') {
						putchar(d[k++]);
					} else k++;
					//d[0] = c[lettersPerWord];
					//d[1] = c[(lettersPerWord - 1)];
					//d[k] = c[k];
				}
			}
			//printf("\n");
		}
	} 
	//printf("\n");

	i = charCount;
	r = 0;

	//below is attempted reversal of words

	/*for (i = charCount; i >= 0; i--) {
		printf("check1\n");
		r++;
		if (b[i] == ' ' || b[i] == '.' || b[i] == '!' || b[i] == '?' || i == 0) {
			printf("check2\n");
			lettersPerWord = j - i;
			printf("check3: %d\n", lettersPerWord);
			while (j >= i) {
				putchar(b[j--]);
				printf(", check4, ");
				//j--;
			}
			k = 0;
			while (k < lettersPerWord) {
					c[k] = b[(i + lettersPerWord) - k];
					printf("i:%d & r:%d & lpw:%d", i, r, lettersPerWord);
					printf(", ");
					putchar(d[k++]);
					//k--;
					//k++;
					printf(", %d", lettersPerWord);
					printf(", %d", k);
			}
			k = 0;
			if (r < lettersPerWord) {
				printf(" ");
			}
			putchar(d[k++]);
			if (lettersPerWord < 2) {
				d[k] = c[k];
			} else {
				d[0] = c[(lettersPerWord)];
				d[1] = c[(lettersPerWord - 2)];
				d[2] = c[(lettersPerWord - 1)];
				while (k < (lettersPerWord + 1)) {
					if (k >= 2) {
						d[(k + 1)] = c[(k - 2)];
					}
					if (d[k] != ' ') {
						putchar(d[k++]);
					} else k++;
					//d[0] = c[lettersPerWord];
					//d[1] = c[(lettersPerWord - 1)];
					//d[k] = c[k];
				}
			} 
			//printf("\n");
		}
	} */

	if (a[charCount] == '.') {
		printf(".\n");
	} else if (a[charCount] == '!') {
		printf("!\n");
	} else printf("?\n");


	//printf("\n%d\n", wordCount);
	//printf("%d\n", charCount);

return 0;
}
