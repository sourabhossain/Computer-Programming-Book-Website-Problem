#include <stdio.h>

int power(int x, int k) {
    int i, total = 1;

    for(i = 0; i < k; i++) {
        total *= x;
    }
    return total;
}

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int x, k;
        scanf("%d%d", &x, &k);

        int i, result = 0;

        for(i = 0; i <= k; i++) {
            result += power(x, i);
        }
        printf("Result = %d\n", result);
    }

    return 0;
}
