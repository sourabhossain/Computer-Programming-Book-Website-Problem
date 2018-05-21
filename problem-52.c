#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int x, n;
        scanf("%d%d", &x, &n);

        if(x > n) {
            printf("Invalid!\n");
        } else {
            int i;

            for(i = x; i <= n; i += x) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
