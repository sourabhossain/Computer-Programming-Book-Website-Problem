#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        long long a, b, c;
        scanf("%lld%lld%lld", &a, &b, &c);

        while(a <= b) {
            if(a % c == 0) {
                break;
            }
            a++;
        }

        while(a <= b) {
            printf("%d\n", a);
            a += c;
        }
    }

    return 0;
}
