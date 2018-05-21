#include <stdio.h>
#include <math.h>
#define size 102

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
        int i, n, count = 0;

        for(i = 0; i < 10; i++) {
            scanf("%d", &n);

            if(c[n]) {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
