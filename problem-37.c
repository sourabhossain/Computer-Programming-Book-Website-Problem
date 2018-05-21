#include <stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n;
        scanf("%d", &n);

        int base = 0, total = 0;

        if(n == 0) {
            printf("%d\n", 1);
            continue;
        }

        while(n) {
            int t = n % 10;

            if(t & 1) {
               t--;
            } else {
                t++;
            }

            int i;
            
            for(i = 0; i < base; i++) {
                t *= 10;
            }
            
            total += t;
            base++;
            n /= 10;
        }
        printf("%d\n", total);
    }

    return 0;
}
