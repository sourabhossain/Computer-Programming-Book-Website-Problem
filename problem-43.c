#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int r1, r2, b;

        scanf("%d%d%d", &r1, &r2, &b);
        printf("%0.2lf %0.2lf\n", (r2 / (300.0 - b)) * 6.0, 6.0 * ((r1 + 1.0) - r2) / b);
    }

    return 0;
}
