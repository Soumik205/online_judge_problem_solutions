#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    while (true) {
        ll n, m;    cin >> n >> m;
        if (n == 0 and m == 0) return 0;

        map < ll , ll > mp;
        ll count = 0;

        while (n--) {
            ll temp;    cin >> temp;
            mp[temp]++;
        }
        while (m--) {
            ll temp;    cin >> temp;
            mp[temp]++;
        }

        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it -> second > 1) count++;
        }
        cout << count << endl;
    }
    return 0;
}

//g++ -o a.exe compiler.cpp
