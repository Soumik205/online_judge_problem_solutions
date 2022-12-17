#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    string s;   getline (cin, s);
    string t;   getline (cin, t);
    map < char, int > mp;

    long long s_size = s.size();
    long long t_size = t.size();

    for (int i = 0; i < s_size; i++) {
        if (s[i] >= 'A' and s[i] <= 'Z') mp[s[i]]++;
        else if (s[i] >= 'a' and s[i] <= 'z') mp[s[i]]++;
    }

    for (int i = 0; i < t_size; i++) {
        if (t[i] >= 'A' and t[i] <= 'Z') mp[t[i]]--;
        else if (t[i] >= 'a' and t[i] <= 'z') mp[t[i]]--;
    }

    for (auto it = mp.begin(); it != mp.end(); it++) {
        if (it -> second < 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}