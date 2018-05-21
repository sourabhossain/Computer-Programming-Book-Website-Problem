#include <stdio.h>

int  arr[] = {6, 28, 496, 8128, 33550336};

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int n;
        scanf("%d", &n);

        int i;

        for(i = 0; i < 5; i++) {
            if(n >= arr[i]) {
                printf("%d\n", arr[i]);
            }
        }
    }

    return 0;
}
