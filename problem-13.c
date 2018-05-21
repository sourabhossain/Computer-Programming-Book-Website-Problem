#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        char s[51];
        scanf("%s", s);

        int i;
        
        for(i = 0; s[i]; i++) {
            if(s[i] == 'L') {
                s[i] = s[i - 1];
            } else if(s[i] == 'R') {
                s[i] = s[i + 1];
            }
        }
        printf("%s\n", s);
    }

    return 0;
}
