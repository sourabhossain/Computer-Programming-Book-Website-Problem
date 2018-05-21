#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        char s[51];
        scanf(" %s", s);

        int i, ck = 0;
        for(i = 0; s[i]; i++) {
            if(s[i] & 1) {
                ck++;
            } else {
                ck--;
            }

            if(ck < 0) {
                printf("MAGIC\n");
                break;
            }
        }
        
        if(ck >= 0) {
            printf("NORMAL\n");
        }
    }

    return 0;
}
