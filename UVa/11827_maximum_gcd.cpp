#include <bits/stdc++.h>
using namespace std;

int gcd (int a, int b) { return b == 0 ? a : gcd (b, a % b); }

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int test;   cin >> test;
    string s;
    getline (cin, s);
    while (test--) {
        getline (cin, s);
        vector < int > v;
        int maximum = 0;
        int temp;

        stringstream ss (s);
        while (ss >> temp) v.push_back (temp);

        int size = v.size();
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) maximum = max (maximum, gcd (v[i], v[j]));
        }
        cout << maximum << endl;
        v.clear();
    }
    return 0;
}