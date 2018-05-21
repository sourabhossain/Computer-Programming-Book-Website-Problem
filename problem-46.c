#include <stdio.h>

int main()
{
    int j, T;
    scanf("%d", &T);

    for(j = 1; j <= T; j++) {
        int n;
        scanf("%d", &n);

        int i, data[n];

        for(i = 0; i < n; i++) {
            scanf("%d", &data[i]);
        }

        printf("Set %d:", j);
        for(i = 0; i < n; i += 2) {
            printf(" %d", data[i]);
        }
        putchar('\n');
    }

    return 0;
}
