#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        long long i, a, b, c;

        scanf("%lld%lld%lld", &a, &b, &c);

        for(i = a *= b; i <= c; i += a) {
            printf("%d\n", i);
        }
    }

    return 0;
}
