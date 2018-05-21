#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int n1;
        scanf("%d", &n1);

        int i, a[n1];

        for(i = 0; i < n1; i++) {
            scanf("%d", &a[i]);
        }

        int n2;
        scanf("%d", &n2);

        int b[n2];

        for(i = 0; i < n2; i++) {
            scanf("%d", &b[i]);
        }

        i = 0;
        int j = 0, k = 0, c[n1 + n2], n = n1 + n2;

        while((i + j) < n) {
            if(a[i] < b[j]) {
                c[k] = a[i];
                k++;
                i++;
            } else {
                c[k] = b[j];
                k++;
                j++;
            }
        }
        
        n = k;

        for(i = 0; i < n; i++) {
            if(i && i != n) {
                putchar(' ');
            }
            printf("%d", c[i]);
        }
        putchar('\n');
    }

    return 0;
}
