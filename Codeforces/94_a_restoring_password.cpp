#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", 'w', stdout);

    string s;   cin >> s;
    vector < string > v;

    for (int i = 0; i < 10; i++) {
        string temp;    cin >> temp;
        v.push_back(temp);
    }

    for (int i = 0; i < 80; i += 10) {
        for (int j = 0; j < 10; j++) {
            if (s.substr(i, 10) == v[j]) cout << j;
        }
    }

    cout << endl;
    return 0;
}