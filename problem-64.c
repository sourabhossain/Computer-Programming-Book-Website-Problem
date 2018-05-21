#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    int i, n[26];

    for(i = 0; i < 26; i++) {
        n[i] = i + 1;
    }

    while(T--) {
        char s[101];
        scanf(" %[^\n]", s);

        for(i = 0; s[i]; i++) {
            printf("%d", n[s[i] - 'A']);
        }
        putchar('\n');
    }

    return 0;
}
