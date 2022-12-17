#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", 'w', stdout);

    int n;  cin >> n;
    long long sum = 0;
    vector < long long > v;
    for (int i = 0; i < n; i++) {
        int temp;   cin >> temp;
        sum += temp;
        v.push_back (temp);
    }
    int m;  cin >> m;
    vector < int > p;
    for (int i = 0; i < n; i++) {
        int temp;   cin >> temp;
        p.push_back (temp);
    }

    sort (v.begin(), v.end(), greater < int >());

    //cout << v[0] << v[1] << v[2]<< endl;

    int j = 0;
    while (m--) {
        cout << sum - v[p[j] - 1] << endl;
        j++;
    }

    return 0;
}