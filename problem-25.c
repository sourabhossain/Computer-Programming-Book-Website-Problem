#include <stdio.h>
#include <math.h>

#define size 65536

char ara[size];

void prime()
{
    int i;

    for(i = 2; i < size; i++) {
        ara[i] = 1;
    }

    int root = sqrt(size);

    for(i = 2; i <= root; i++) {
        if(ara[i]) {
            int j;

            for(j = i + i; j < size; j += i) {
                ara[j] = 0;
            }
        }
    }

}

int main()
{
    prime();
    int n;

    while(scanf("%d", &n)) {
        if(n < 2) {
            break;
        }

        int i = 2;
        printf("%d =", n);

        while(n > 1) {
            if(ara[i] && !(n % i)) {
                int count = 0;

                while(!(n % i)) {
                    n = n / i;
                    count++;
                }
                printf(" %d^%d", i, count);

                if(n > 1) {
                    printf(" *");
                }
            } else {
                i++;
            }
        }
        putchar('\n');
    }

    return 0;
}
