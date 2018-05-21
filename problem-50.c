#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int n;
        scanf("%d", &n);

        while(n) {
            if(n == 1) {
                printf("2 + 1\n");
            } else {
                printf("2^%d + ", n);
            }
            n--;
        }
    }

    return 0;
}
