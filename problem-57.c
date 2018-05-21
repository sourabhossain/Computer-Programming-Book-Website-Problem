#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int p, q, c;
        scanf("%d%d%d", &p, &q, &c);

        int i, result = 1;

        for(i = 0; i < q; i++) {
            result = (result * p) % c;
        }
        printf("Result = %d\n", result);
    }

    return 0;
}
