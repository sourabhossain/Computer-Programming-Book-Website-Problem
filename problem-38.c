#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        char s[151];
        scanf(" %[^\n]", s);

        char T[151];
        int len = strlen(s), j = 0;

        while(len) {
              if(s[--len] != ' ') {
                 T[j] = s[len];
                 j++;
              } else {
                 T[j] = '\0';
                 while(j) {
                      putchar(T[--j]);
                 }
                 putchar(' ');
              }
        }

        if(j) {
            T[j] = '\0';
        
            while(j) {
                putchar(T[--j]);
            }
            putchar('\n');
        }
    }

    return 0;
}
