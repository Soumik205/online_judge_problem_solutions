#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    string s;   cin >> s;
    int size = s.size();
    vector < int > v;

    for (int i = 0 ; i < size; i += 2) {    
        int temp = s[i] - '0';
        v.push_back (temp);
    }

    sort (v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (v.size() - i > 1) {
            cout << "+";
        }
    }

    cout << endl;
    return 0;
}