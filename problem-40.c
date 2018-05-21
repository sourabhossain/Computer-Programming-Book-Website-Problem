#include <stdio.h>
#include <math.h>
#define size 1000002

char c[size];

void prime()
{
    int i;
    for(i = 2; i < size; i++) {
        c[i] = 1;
    }

    int j, len = sqrt(size);

    for(i = 2; i <= len; i++) {
        if(c[i]) {
            for(j = i + i; j < size; j += i) {
                c[j] = 0;
            }
        }
    }
}

int main()
{
    int T;
    scanf("%d", &T);
    prime();

    while(T--) {
        long long n;
        scanf("%lld", &n);

        int i, ck = 1, len = sqrt(n);
        for(i = 2; i <= len; i++) {
            if(c[i]) {
                if(!(n % i)) {
                    printf("%lld is not a prime\n", n);
                    ck = 0;
                    break;
                }
            }
        }
        if(ck) {
            printf("%lld is a prime\n", n);
        }

    }

    return 0;
}
