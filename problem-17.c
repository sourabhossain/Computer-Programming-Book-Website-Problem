#include <stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        char a[3], b[3];
        scanf("%s%s", a, b);

        int i, j, k;
        char c[3];

        for(i = 0, k = 0; a[i]; i++) {
            for(j = 0; b[j]; j++) {
                if(a[i] == b[j]) {
                    if(k) {
                        if(c[0] != a[i]) {
                            c[k] = a[i];
                            k++;
                        }
                        continue;
                    }
                    c[k] = a[i];
                    k++;
                }
            }
        }
        c[k] = '\0';

        if(k) {
            if(k == 2) {
                if(c[0] > c[1]) {
                    c[0] ^= c[1];
                    c[1] ^= c[0];
                    c[0] ^= c[1];
                }
            }
            printf("%s\n", c);
        } else {
            printf("N\n");
        }
    }

    return 0;
}
