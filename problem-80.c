#include <stdio.h>
#define SIZE 50

unsigned long long pascal[SIZE][SIZE];

void triangle() {
	pascal[0][0] = 1;
	pascal[1][0] = 1;
	pascal[1][1] = 1;
    
    int i, j;

	for(i = 2; i < SIZE; i++) {
        pascal[i][0] = 1;
		
		for(j = 1; j < i; j++) {
			pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
		}

		pascal[i][j] = 1;	
	}
}

int main()
{
	triangle(); // go to triangle function 

	int T;
	scanf("%d", &T);

	while(T--) {
		int n;
		scanf("%d", &n);
        
        int i, j;

		for(i = 0; i <= n; i++) {
			for(j = 0; j <= i; j++) {
				printf("%llu", pascal[i][j]);

				if(i != j) {
					putchar(' ');
				}
			}
			putchar('\n');
		}

		if(T) {
			putchar('\n');
		}
	}

	return 0;
}