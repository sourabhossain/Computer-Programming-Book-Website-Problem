#include <stdio.h>

int main()
{
    int i, T;
    scanf("%d", &T);

    for(i = 1; i <= T; i++) {
        int B, H;
        
        scanf("%d%d", &B, &H);
        printf("Case %d: %d\n", i, B * H);
    }

    return 0;
}
