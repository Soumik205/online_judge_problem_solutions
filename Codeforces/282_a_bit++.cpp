#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    int n;  cin >> n;
    int count = 0;

    while (n--) {
        string s;   cin >> s;
        if (s[0] == '+' or s[1] == '+' or s[2] == '+') count++;
        else count--;
    }

    cout << count << endl;
    return 0;
}