#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int n;
        long long f = 1;
        scanf("%d", &n);

        while(n) {
            f *= n--;
        }
        printf("%lld\n", f);
    }

    return 0;
}
