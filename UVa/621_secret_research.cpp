#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    int test;   cin >> test;

    while (test--) {
        string s;   cin >> s;
        int size = s.size();

        if (size == 1 and (s[0] == '1' or s[0] == '4' ) ) cout << "+" << endl;
        else if (size == 2 and s[0] == '7'  and s[1] == '8') cout << "+" << endl;
        else if (s[size - 2] == '3' and s[size - 1] == '5') cout << "-" << endl;
        else if (s[0] == '9' and s[size - 1] == '4') cout << "*" << endl;
        else cout << "?" << endl;
    }
    return 0;
}
