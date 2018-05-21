#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        char a[130], b[130];
        scanf("%s%s", a, b);

        int i;
        for(i = 0; a[i]; i++) {
            if(a[i] == b[0]) {
                int j;

                for(j = 1; b[j]; j++) {
                    if(a[i + j] != b[j]) {
                        j = 0;
                        break;
                    }
                }

                if(j) {
                    printf("%d\n", i);
                    break;
                }
            }
        }
    }

    return 0;
}
