#include <stdio.h>

int main()
{
    int i, T;
    scanf("%d", &T);

    for(i = 1; i <= T; i++) {
        int x, n;
        scanf("%d%d", &x, &n);

        int j;
        printf("Case %d:", i);

        for(j = x; j <= n; j += x) {
            printf(" %d", j);
        }
        printf("\n");
    }

    return 0;
}
