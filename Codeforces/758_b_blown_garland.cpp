#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    string s;   cin >> s;
    int size = s.size();
    int r = 0;
    int b = 0;
    int y = 0;
    int g = 0;

    int rem = size % 4;
    int loop = size / 4;
    loop *= 4;

    for (int i = 0; i < loop - 3; i += 4) {
        string t = s.substr(i, 4);

        bool red = false;
        bool blue = false;
        bool yellow = false;
        bool green = false;

        for (int j = 0; j < 4; j++) {
            if (t[j] == 'R') red = true;
            else if (t[j] == 'B') blue = true;
            else if (t[j] == 'Y') yellow = true;
            else if (t[j] == 'G') green = true;
        }

        if (!red) r++;
        if (!blue) b++;
        if (!yellow) y++;
        if (!green) g++;
    }

    //printf("%d %d %d %d\n", r, b, y, g);    

    for (int i = 0; i < rem; i++) {
        if (s[loop + i] == '!') {

            int j = loop + i;
            bool found = false;

            while (!found) {
                if (s[j - 4] == 'R') {
                    r++;
                    found = true;
                }
                else if (s[j - 4] == 'B') {
                    b++;
                    found = true;
                }
                else if (s[j - 4] == 'Y') {
                    y++;
                    found = true;
                }
                else if (s[j - 4] == 'G') {
                    g++;
                    found = true;
                }
                j -=4;
            }
        }
    }

    printf("%d %d %d %d\n", r, b, y, g);
    return 0;
}