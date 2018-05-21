#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int n;
        scanf("%d", &n);

        int c = sqrt(n);
        if(c * c == n) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
