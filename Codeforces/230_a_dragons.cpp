#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int power, dragons;     cin >> power >> dragons;
    vector < pair < int , int > > v;

    for (int i = 0; i < dragons; i++) {
        int a, b;   cin >> a >> b;
        v.push_back (make_pair(a, b));
    }

    sort (v.begin(), v.end());

    for (int i = 0; i < dragons; i++) {
        if (v[i].first < power) {
            power += v[i].second;
        }
        else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}