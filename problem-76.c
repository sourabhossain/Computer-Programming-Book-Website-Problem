#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int n;
        scanf("%d", &n);

        int temp = n * (n + 1) / 2, num, sum = 0;

        while(--n) {
            scanf("%d", &num);
            sum += num;
        }
        printf("%d\n", temp - sum);
    }

    return 0;
}
