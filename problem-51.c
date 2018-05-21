#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        double x;
        scanf("%lf", &x);

        int day = 0;

        while(x > 1.00) {
            day++;
            x /= 2;
        }
        printf("%d days\n", day);
    }

    return 0;
}
