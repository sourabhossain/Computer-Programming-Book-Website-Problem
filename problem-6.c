#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int b = 0, s = 101, n, i = 5;

        while(i--) {
            scanf("%d", &n);

            if(b < n) {
                b = n;
            }
            
            if(s > n) {
                s = n;
            }
        }
        printf("%d %d\n", b, s);
    }

    return 0;
}
