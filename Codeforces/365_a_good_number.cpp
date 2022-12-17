#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n;  cin >> n;
    int k;  cin >> k;
    int ans = 0;

    while (n--) {
        string s;   cin >> s;
        set < char > st;
        long long size = s.size();

        for (int i = 0;  i < size; i++) {
            if (s[i] <= '0' + k) st.insert(s[i]);
        }

        if (st.size() == k + 1) ans++;
    }

    cout << ans << endl;
    return 0;
}