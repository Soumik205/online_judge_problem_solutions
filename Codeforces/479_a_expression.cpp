#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    int a, b, c;    cin >> a >> b >> c;
    vector < int > v;

    v.push_back(a + b * c);
    v.push_back(a * b + c);
    v.push_back((a + b) * c);
    v.push_back(a + (b * c));
    v.push_back((a * b) + c);
    v.push_back(a * (b + c));
    v.push_back(a * b * c);
    v.push_back(a + b + c);

    /*for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }
    cout << endl;*/

    sort (v.rbegin(), v.rend());
    cout << v[0] << endl;
    return 0;
}