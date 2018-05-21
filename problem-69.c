#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        char s[10001];
        scanf(" %[^\n]", s);

        int count = 0;
        char *word = strtok(s, ",!;?. ");

        while(word) {
            if(strlen(word)) {
                count++;
            }
            word = strtok(NULL, ",!;?. ");
        }
        printf("Count = %d\n", count);
    }

    return 0;
}
