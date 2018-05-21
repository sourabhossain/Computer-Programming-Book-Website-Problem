#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        char s[1001];
        scanf(" %[^\n]", s);

        int i, len = strlen(s);

        for(i = 0; i < len; i++) {
            if(s[i] != s[--len]) {
                printf("Sorry! It is not palindrome!\n");
                break;
            }
        }
        
        if(i > len) {
            printf("Yes! It is palindrome!\n");
        }
    }

    return 0;
}
