#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    scanf("%d", &T);

    int i;

    for(i = 1; i <= T; ++i) {
        int r1, r2, c1, c2;

        scanf("%d%d%d%d", &r1, &c1, &r2, &c2);

        int a = abs(r1 - r2);
        int b = abs(c1 - c2);
        int step;

        if(a > b) {
            step = a;
        } else {
            step = b;
        }
        printf("Case %d: %d\n", i, step);
    }

    return 0;
}
