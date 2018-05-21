#include <stdio.h>

int main()
{
    int y1, m1, d1;
    scanf("%d%d%d", &y1, &m1, &d1);

    int i, day1 = 0, day[] = {31, 31, 31, 31, 31, 30, 30, 30, 30, 30, 30, 30};

    if(day[m1 - 1] == d1) {
        m1++;
        d1 = 0;
    }

    if(m1 == 12 && d1 == 0) {
        y1++;
        m1 = 0;
    }

    day1 += d1;

    for(i = 0; i < m1 - 1; i++) {
        day1 += day[i];
    }
    
    int T;
    scanf("%d", &T);

    while(T--) {
        int y2, m2, d2;
        scanf("%d%d%d", &y2, &m2, &d2);

        if(day[m2 - 1] == d2) {
            m2++;
            d2 = 0;
        }

        if(m2 == 12 && d2 == 0) {
            y2++;
            m2 = 0;
        }

        int day2 = 0;
        day2 += d2;

        for(i = 0; i < m2 - 1; i++) {
            day2 += day[i];
        }
        day2 = (day1 - day2) + ((y1 - y2) * 365);

        int count = 0;
        
        while(y2 <= y1) {
            if(!(y2 % 400) || (!(y2 % 4) && (y2 % 100))) {
                count++;
            }
            y2++;
        }
        printf("%d\n", day2 + count);
    }

    return 0;
}
