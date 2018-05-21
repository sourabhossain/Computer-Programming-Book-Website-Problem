#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
       int n;
       scanf("%d", &n);

       int zero = 0;

       while(n) {
           int d = n / 5;
           zero += d;
           n = d;
       }
       printf("%d\n", zero);
    }

    return 0;
}
