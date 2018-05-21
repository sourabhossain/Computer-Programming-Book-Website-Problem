#include <stdio.h>

unsigned long long arr[] = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328, 2305843008139952128};

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        unsigned long long n; /// 2^64 - 1 = 18446744073709551615
        scanf("%llu", &n);

        int i;

        for(i = 0; i < 8; i++) {
            if(n == arr[i]) {
                printf("YES, %llu is a perfect number!\n", n);
                break;
            }
        }
        
        if(i == 8) {
            printf("NO, %llu is not a perfect number!\n", n);
        }
    }

    return 0;
}
