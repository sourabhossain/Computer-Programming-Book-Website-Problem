#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int n;
        scanf("%d", &n);

        int i, data[n], c = 1;

        for(i = 0; i < n; i++) {
            scanf("%d", &data[i]);
        }

        if(data[0] < data[1]) {
            for(i = 1; i < n; i++) {
                if(data[i] < data[i - 1]) {
                    c = 0;
                    break;
                }
            }
        } else {
            for(i = 1; i < n; i++) {
                if(data[i] > data[i - 1]) {
                    c = 0;
                    break;
                }
            }
        }

        if(c) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
