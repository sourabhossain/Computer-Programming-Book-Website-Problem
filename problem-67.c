#include <stdio.h>
#include <ctype.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--) {
        char s[100001];
        scanf(" %[^\n]", s);

        int i, j = 0, k = 0;
        char ch, a[100001], b[100001];

        for(i = 0; s[i]; i++) {
            ch = tolower(s[i]);

            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                a[j] = s[i];
                j++;
            } else if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != ' ') {
                b[k] = s[i];
                k++;
            }
        }

        a[j] = '\0';
        b[k] = '\0';
        
        printf("%s\n%s\n", a, b);
    }

    return 0;
}
