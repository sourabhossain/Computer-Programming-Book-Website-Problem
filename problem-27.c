#include <stdio.h>

void swap(int *a, int *b) {
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

int main()
{
    int i, T;
    scanf("%d", &T);

    for(i = 1; i <= T; i++) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);

        if(a > b) {
            swap(&a, &b);
        }

        if(a > c) {
            swap(&a, &c);
        }

        if(b > c) {
            swap(&b, &c);
        }
        printf("Case %d: %d %d %d\n", i, a, b, c);
    }

    return 0;
}
