#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int n;
        scanf("%d", &n);

        int i, j, c;

        for(i = 0, c = 1; i < n; i++) {
            for(j = i + 1; j < n; j++) {
                putchar(' ');
            }

            for(j = 0; j < c; j++) {
                putchar('*');
            }

            c += 2;
            putchar('\n');
        }

        if(T) {
            putchar('\n');
        }
    }

    return 0;
}
