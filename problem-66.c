#include <stdio.h>
#include <ctype.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        char s[1001];
        scanf(" %[^\n]", s);

        int i, count = 0;

        for(i = 0; s[i]; i++) {
            s[i] = tolower(s[i]);

            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                count++;
            }
        }
        printf("Number of vowels = %d\n", count);
    }

    return 0;
}
