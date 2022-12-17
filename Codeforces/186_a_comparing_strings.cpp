#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    string s;   cin >> s;
    string t;   cin >> t;

    map < char, int > mp;

    int s_size = s.size();
    int t_size = t.size();
    int count = 0;

    for (int i = 0; i < s_size; i++) mp[s[i]]++;
    for (int i = 0; i < t_size; i++) mp[t[i]]--;

    for (auto it = mp.begin(); it != mp.end(); it++) {
        if (it -> second != 0) {
            cout << "NO" << endl;
            return 0;
        }
    }

    for (int i = 0; i < s_size; i++) {
        if (s[i] != t[i]) count++;
        if (count > 2) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}