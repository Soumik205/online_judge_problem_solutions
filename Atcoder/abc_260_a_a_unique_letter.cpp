#include<bits/stdc++.h>
using namespace std;
 
typedef long long LL;
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout);
    #endif
    
    string s;   cin >> s;
    map < char, int > mp;

    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }
    for (auto it: mp) {
        if (it.second == 1) {
            cout << it.first << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}