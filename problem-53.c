#include <stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        char s[1001];
        scanf(" %[^\n]", s);

        int i, upper[26], lower[26];

        for(i = 0; i < 26; i++) {
            upper[i] = 0;
            lower[i] = 0;
        }

        for(i = 0; s[i]; i++) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                lower[s[i] - 'a']++;
            } else if(s[i] >= 'A' && s[i] <= 'Z') {
                upper[s[i] - 'A']++;
            }
        }
        for(i = 0; i < 26; i++) {
            if(upper[i]) {
                printf("%c = %d\n", 'A' + i, upper[i]);
            }
        }

        for(i = 0; i < 26; i++) {
            if(lower[i]) {
                printf("%c = %d\n", 'a' + i, lower[i]);
            }
        }
    }

    return 0;
}
