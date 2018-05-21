#include <stdio.h>

int gcd(int a, int b)
{
    while(a) {
        int T = a;
        a = b % a;
        b = T;
    }
    return b;
}

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int a, b;

        scanf("%d%d", &a, &b);
        printf("LCM = %d\n", (a * b) / gcd(a, b));
    }

    return 0;
}
