#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int n;
        scanf("%d", &n);

        int i, j;
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                putchar('*');
            }
            putchar('\n');
        }

        if(T) {
            putchar('\n');
        }
    }

    return 0;
}
