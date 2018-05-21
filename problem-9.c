#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int i, n;
        double marks, total = 0;
        scanf("%d", &n);

        for(i = 0; i < n; i++) {
            scanf("%lf", &marks);
            total += marks;
        }
        printf("%0.2lf\n", total / n);
    }

    return 0;
}
