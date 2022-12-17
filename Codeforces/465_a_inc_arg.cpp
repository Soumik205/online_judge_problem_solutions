#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n;  cin >> n;
    string s;   cin >> s;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            count++;
            break;
        }
        count++;
    }

    cout << count << endl;
    return 0;
}