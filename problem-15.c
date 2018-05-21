#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        char n[101];
        scanf("%s", n);

        if(n[strlen(n) - 1] & 1) {
            printf("odd\n");
        } else {
            printf("even\n");
        }
    }

    return 0;
}
