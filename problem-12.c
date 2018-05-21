#include <stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n, count = 1;
        scanf("%d", &n);

        while(n /= 10) {
            count++;
        }
        printf("%d\n", count);
    }

    return 0;
}
