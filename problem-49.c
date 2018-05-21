#include <stdio.h>

long long fact(int n) {
    long long f = 1;

    while(n) {
        f *= n--;
    }
    return f;
}

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        int n;
        scanf("%d", &n);

        double sum = 0;

        while(n) {
            sum += (n*1.0 / fact(n));
            n--;
        }
        printf("%0.4lf\n", sum);
    }

    return 0;
}
