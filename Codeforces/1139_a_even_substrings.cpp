#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n;  cin >> n;
    string s;   cin >> s;
    int count = 0;

    vector < int > v;

    for (int i = 0; i < n; i++) {
        if (s[i] % 2 == 0) {
            count++;
            v.push_back(i);
        }
    }

    int size = v.size();

    for (int i = 0; i < size; i++) {
        count += v[i];
    }

    cout << count << endl;
    return 0;
}
