#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int n;
        scanf("%d", &n);

        if(n & 1) {
            printf("odd\n");
        } else {
            printf("even\n");
        }
    }

    return 0;
}
