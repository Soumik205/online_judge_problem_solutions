#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n;  cin >> n;
    vector < int > v;

    int loop = 12;
    while (loop--) {
        int temp;   cin >> temp;
        v.push_back(temp);
    }

    sort (v.rbegin(), v.rend());
    int count = 0;
    int i = 0;

    while (n > 0) {
        n -= v[i];
        count++;
        i++;
    }
    if (count > 12) count = -1;
    cout << count << endl;
}