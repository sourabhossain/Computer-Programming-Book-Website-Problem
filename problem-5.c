#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        char a, b, c;
        
        scanf(" %c%c%c", &a, &b, &c);
        printf("%d\n", a + b + c);
    }

    return 0;
}
