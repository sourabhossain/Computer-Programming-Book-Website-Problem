#include <stdio.h>

int main()
{
    int i, T;
    scanf("%d", &T);

    for(i = 1; i <= T; i++) {
        int m;
        scanf("%d", &m);

        if(m >= 80) {
            printf("Case %d: A+\n", i);
        } else if(m >= 75) {
            printf("Case %d: A\n", i);
        } else if(m >= 70) {
            printf("Case %d: A-\n", i);
        } else if(m >= 65) {
            printf("Case %d: B+\n", i);
        } else if(m >= 60) {
            printf("Case %d: B\n", i);
        } else if(m >= 55) {
            printf("Case %d: B-\n", i);
        } else if(m >= 50) {
            printf("Case %d: C\n", i);
        } else if(m >= 45) {
            printf("Case %d: D\n", i);
        } else {
            printf("Case %d: F\n", i);
        }
    }

    return 0;
}
