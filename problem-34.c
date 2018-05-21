#include <stdio.h>

int main()
{
    int i, T;
    scanf("%d", &T);

    for(i = 1; i <= T; i++) {
        long long n;
        scanf("%lld", &n);

        int y = n / 31104000;
        n = n - (y * 31104000);
        int m = n / 2592000;
        n = n - (m * 2592000);
        int d = n / 86400;
        n = n - (d * 86400);
        int h = n / 3600;
        n = n - (h * 3600);
        int mi = n / 60;
        n = n - (mi * 60);
        int s = n % 60;

        printf("Case %d: ", i);
        int c = 0;

        if(y) {
            if(y == 1) {
                printf("%d year", y);
                c = 1;
            } else {
                printf("%d years", y);
                c = 1;
            }
        }

        if(m) {
            if(m == 1) {
               if(c) {
                  printf(" %d month", m);
               } else {
                    printf("%d month", m);
                    c = 1;
               }
            } else {
                if(c) {
                    printf(" %d months", m);
                } else {
                    printf("%d months", m);
                    c = 1;
                }
            }
        }

        if(d) {
            if(d == 1) {
                if(c) {
                    printf(" %d day", d);
                } else {
                    printf("%d day", d);
                    c = 1;
                }
            } else {
                if(c) {
                    printf(" %d days", d);
                } else {
                    printf("%d days", d);
                    c = 1;
                }
            }
        }

        if(h) {
            if(h == 1) {
                if(c) {
                    printf(" %d hour", h);
                } else {
                    printf("%d hour", h);
                    c = 1;
                }
            } else {
                if(c) {
                    printf(" %d hours", h);
                } else {
                    printf("%d hours", h);
                    c = 1;
                }
            }
        }

        if(mi) {
            if(mi == 1) {
                if(c) {
                    printf(" %d minute", mi);
                } else {
                    printf("%d minute", mi);
                    c = 1;
                }
            } else {
                if(c) {
                    printf(" %d minutes", mi);
                } else {
                    printf("%d minutes", mi);
                    c = 1;
                }
            }
        }

        if(s) {
            if(s == 1) {
                if(c) {
                    printf(" %d second", s);
                } else {
                    printf("%d second", s);
                }
            } else {
                if(c) {
                    printf(" %d seconds", s);
                } else {
                    printf("%d seconds", s);
                }
            }
        }
        putchar('\n');
    }

    return 0;
}
