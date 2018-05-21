#include <stdio.h>
#include <ctype.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        char s[10001], c[2], t;
        
        scanf(" %[^\n]", s);
        scanf("%s", c);

        int i, count = 0;

        for(i = 0; s[i]; i++) {
            if(s[i] == tolower(c[0]) || s[i] == toupper(c[0])) {
                count++;
            }
        }

        if(count) {
            printf("Occurrence of '%c' in '%s' = %d\n", c[0], s, count);
        } else {
            printf("'%c' is not present\n", c[0]);
        }
    }

    return 0;
}
