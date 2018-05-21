#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        char s[100001];
        scanf(" %[^\n]", s);

        int i = 0, count = 1;
        while(s[i]) {
            if(s[i] == ' ') {
                while(s[i] == ' ') {
                    i++;
                }
                count++;
            } else {
                i++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
