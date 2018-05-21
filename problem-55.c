#include <stdio.h>

int main()
{
    int i = 1000;

    printf("%d", i--);

    while(i) {
        if(!(i % 5)) {
            printf("\n%d", i--);
            continue;
        }
        printf("\t%d", i--);
    }
    putchar('\n');

    return 0;
}
