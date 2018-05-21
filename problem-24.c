#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int ss1, ss2, mm1, mm2, hh1, hh2, c;

        scanf("%d%d%d%d%d%d%d", &hh1, &mm1, &ss1, &hh2, &mm2, &ss2, &c);

        if(hh1 > hh2) {
            hh2 += 24;
        }

        int s = 0;
        
        s += ss2 - ss1;
        s += (mm2 - mm1) * 60;
        s += (hh2 - hh1) * 3600;

        if(s < 0) {
            s = -s;
        }
        printf("%d\n", s * c);
    }

    return 0;
}
