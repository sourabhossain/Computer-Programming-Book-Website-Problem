#include <stdio.h>

int main()
{
    int i, T;
    scanf("%d", &T);

    for(i = 1; i <= T; i++) {
        int D, H;
        scanf("%d%d", &D, &H);

        int j, k;
        printf("Case %d:\n", i);

        for(j = 0; j < H; j++) {
            for(k = 0; k <= j; k++) {
                printf("%d", D);
            }
            putchar('\n');
        }
    }

    return 0;
}
