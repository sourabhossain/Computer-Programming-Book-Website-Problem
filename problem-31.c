#include <stdio.h>

int main()
{
    int i, T;
    scanf("%d", &T);

    for(i = 1; i <= T; i++) {
        int n;
        scanf("%d", &n);

        printf("Case %d:", i);
        int j, l = n / 2;

        for(j = 1; j <= l; j++) {
            if(!(n % j)) {
                printf(" %d", j);
            }
        }
        printf(" %d\n", n);
    }

    return 0;
}
