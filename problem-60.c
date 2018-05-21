#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        char s[1001];
        scanf(" %[^\n]", s);

        int len = strlen(s);

        while(len) {
            putchar(s[--len]);
        }
        putchar('\n');
    }

    return 0;
}
