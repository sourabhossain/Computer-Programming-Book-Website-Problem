#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int m, total = 0, i = 5;

        while(i--) {
            scanf("%d", &m);
            total += m;
        }
        printf("%d\n", total / 5);
    }

    return 0;
}
