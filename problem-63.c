#include <stdio.h>
#include <math.h>
#define size 100002

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
    prime(); // go to prime function

    int T;
    scanf("%d", &T);

    while(T--) {
        int a, b;
        scanf("%d%d", &a, &b);

        if(a > b) {
            a ^= b;
            b ^= a;
            a ^= b;
        }

        int count = 0;
        
        while(a <= b) {
            if(c[a]) {
                count++;
            }
            a++;
        }
        printf("%d\n", count);
    }

    return 0;
}
