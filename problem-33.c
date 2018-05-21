#include <stdio.h>

int main()
{
    int i, T;
    scanf("%d", &T);

    for(i = 1; i <= T; i++) {
        double a, b, c;
        scanf("%lf%lf%lf", &a, &b, &c);

        int j = 0, k = 0;

        if(a - b == b - c) {
           j = 1;
        }

        if(a / b == b / c) {
            k = 1;
        }

        if(j && k) {
           printf("Case %d: Both\n", i);
        } else if(j) {
            printf("Case %d: Arithmetic Progression\n", i);
        } else if(k) {
            printf("Case %d: Geometric Progression\n", i);
        } else {
            printf("Case %d: None\n", i);
        }
    }

    return 0;
}
