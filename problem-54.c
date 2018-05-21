#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int n, m;
        scanf("%d%d", &n, &m);

        int i, j;

        for(i = 0; i < n; i++) {
            for(j = 0; j <= i; j++) {
                printf("%d", m);
            }
            putchar('\n');
        }

        for(i = n - 1; i > 0; i--) {
            for(j = 0; j < i; j++) {
                printf("%d", m);
            }
            putchar('\n');
        }

        if(T) {
            putchar('\n');
        }
    }

    return 0;
}
