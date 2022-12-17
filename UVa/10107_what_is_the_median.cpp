#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    long long temp;
    vector < long long > v;

    while (cin >> temp) {
        v.push_back (temp);
        sort (v.begin(), v.end());
        long long size = v.size();

        if (size & 1) {
            cout << v[(size / 2)] << endl;
        }
        else {
            long long ans = v[size / 2] + v[floor ((size / 2) - 1)];
            cout << (ans / 2) << endl; 
        }
    }
    return 0;
}