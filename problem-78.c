#include <stdio.h>

int main()
{
    int T, a = 0, b = 0;
    
    scanf("%d", &T);

    while(T--) {
        int n;
        scanf("%d", &n);

        if(n > 0) {
            a++;
        } else if(n < 0) {
            b++;
        }
    }

    printf("%d %d\n", a, b);

    return 0;
}
