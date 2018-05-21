#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int x, y, xc, yc, r;
        
        scanf("%d%d%d%d%d", &xc, &yc, &r, &x, &y);

        if(sqrt(pow(x - xc, 2) + pow(y - yc, 2)) < r) {
            printf("The point is inside the circle\n");
        } else {
            printf("The point is not inside the circle\n");
        }
    }

    return 0;
}
