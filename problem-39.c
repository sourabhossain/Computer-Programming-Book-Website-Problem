#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int n;

        scanf("%d", &n);

        if(n == 0) {
            puts("0");
        } else if(n == 1) {
            puts("0\n1");
        } else {
            char a[n + 1], b[n + 1];
            int i;

            a[0] = '1';
            b[0] = '1';

            for(i = 1; i < n; i++) {
                a[i] = '0';
                b[i] = '1';
            }
            a[i] = '\0';
            b[i] = '\0';

            while(strcmp(a, b)) {
                puts(a);
                i = strlen(a);
                while(a[--i]) {
                    if(a[i] == '0') {
                        a[i]++;
                        break;
                    }
                    a[i]--;
                }
            }
            puts(b);
        }
    }

    return 0;
}
