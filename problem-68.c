#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        char s[10001];
        scanf(" %[^\n]", s);

        int i, count = 1;

        for(i = 0; s[i]; i++) {
            if(s[i] == ' ') {
                count++;
            }
        }
        printf("Count = %d\n", count);
    }

    return 0;
}
