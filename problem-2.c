#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    int P = 0, N = 0;
    while(T--) {
        int n;
        scanf("%d", &n);

        if(n > 0) {
            P++;
        } else if(n < 0) {
            N++;
        }
    }
    printf("%d %d\n", P, N);

    return 0;
}
