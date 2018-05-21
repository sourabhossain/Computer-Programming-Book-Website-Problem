#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int r, a, b;
        scanf("%d%d%d", &r, &a, &b);

        if(2 * r <= a && 2 * r <= b) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
