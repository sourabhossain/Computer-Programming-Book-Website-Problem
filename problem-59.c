#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int n;
        scanf("%d", &n);

        int t = n, total = 0;

        while(t) {
            int temp = t % 10;
            total += (temp * temp * temp);
            t /= 10;
        }

        if(n == total) {
            printf("%d is an armstrong number!\n", n);
        } else {
            printf("%d is not an armstrong number!\n", n);
        }
    }

    return 0;
}
