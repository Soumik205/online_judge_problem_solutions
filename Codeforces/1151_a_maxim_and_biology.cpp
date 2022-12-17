#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", 'w', stdout);

    int n;  cin >> n;
    string s;   cin >> s;

    int size = s.size() - 3;

    int min = 400;

    for (int i = 0; i < size; i++) {
        string r = s.substr(i, 4);

        int a = abs ('A' - int (r[0]));
        int b = abs ('C' - int (r[1]));
        int c = abs ('T' - int (r[2]));
        int d = abs ('G' - int (r[3]));

        if (a > 13) {
            a -= 26;
            a = abs(a);
        }
        if (b > 13) {
            b -= 26;
            b = abs(b);
        }
        if (c > 13) {
            c -= 26;
            c = abs(c);
        }
        if (d > 13) {
            d -= 26;
            d = abs(d);
        }
        if ( (a + b + c + d) < min) min = a + b + c + d;
    }

    cout << min << endl;
    return 0;
}