#include <stdio.h>
#include <string.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        char s[1000001];
        scanf(" %[^\n]", s);

        int count = 0;
        char *word = strtok(s, ". ");

        while(word) {
            if(strlen(word)) {
                count++;
            }
            word = strtok(NULL, ". ");
        }
        printf("%d\n", count * 420);
    }

    return 0;
}
