#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    string arr[10] = {"", "", "2", "3", "322", "5", "53", "7", "7222", "7332"};

    int n;  cin >> n;
    string s;   cin >> s;
    string ans = "";

    for (int i = 0; i < n; i++) {
        ans += arr[s[i] - '0'];
    }

    sort (ans.rbegin(), ans.rend());

    cout << ans << endl;
    return 0;
}