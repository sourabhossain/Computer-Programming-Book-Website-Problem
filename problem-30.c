#include <stdio.h>

int main()
{
    int i, T;
    scanf("%d", &T);

    for(i = 1; i <= T; i++) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);

        int j, k, l;
        printf("Case %d:\n", i);
        for(j = 0; j <= a; j++) {
            for(k = j; k <= b; k++) {
                if(j != k) {
                    for(l = k; l <= c; l++) {
                        if((k != l) && (l != j)) {
                            printf("%d %d %d\n", j, k, l);
                        }
                    }
                }
            }
        }
    }

    return 0;
}
