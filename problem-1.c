#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        char s[6];

        scanf("%s", s);
        printf("Sum = %d\n", (s[0] - '0') + (s[4] - '0'));
    }

    return 0;
}
