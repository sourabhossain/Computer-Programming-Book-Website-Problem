#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int n;
        scanf("%d", &n);

        char s[n][10001];
        int i;

        for(i = 0; i < n; i++) {
            scanf(" %[^\n]", s[i]);
        }

        int j;

        for(i = 0; i < n; i++) {
            for(j = i + 1; j < n; j++) {
                if(strcmp(s[i], s[j]) > -1) {
                    char S[10001];
                    strcpy(S, s[i]);
                    strcpy(s[i], s[j]);
                    strcpy(s[j], S);
                }
            }
        }

        for(i = 0; i < n; i++) {
            printf("%s\n", s[i]);
        }
    }

    return 0;
}
