#include <bits/stdc++.h>

using namespace std;

int fact(int n) {
    int f = 1;

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
        char str[1001];

        scanf(" %[^\n]", str);

        char *word;
        word = strtok(str, ",!;?. ");
        map <string, int> m;
        int i = 0;

        while(word) {
            if(strlen(word) > 0) {
                ++i;
                m[word]++;
            }
            word = strtok(NULL, ",!;?. ");
        }

        int total = 1;
        for(map <string, int>::iterator it = m.begin(); it != m.end(); ++it) {
            if(it->second > 1) {
                total *= fact(it->second);
            }
        }

        if(total) {
            printf("1/%d\n", fact(i) / total);
        } else {
            printf("1/%d\n", fact(i));
        }
    }

    return 0;
}
