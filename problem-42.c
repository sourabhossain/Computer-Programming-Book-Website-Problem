#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        char a[128], b[128];
        scanf("%s%s", a, b);

        int i, count;
        for(i = count = 0; a[i]; i++) {
            if(a[i] == b[0]) {
               int j;
               for(j = 1; b[j]; j++) {
                   if(a[i + j] != b[j]) {
                        j = 0;
                        break;
                   }
               }

               if(j) {
                  count++;
               }
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
