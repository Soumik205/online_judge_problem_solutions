#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    int n;  cin >> n;
    int m;  cin >> m;
    int min = 0;
    int max = 0;

    vector < int > v;
    vector < int > v2;

    for (int i = 0; i < m; i++) {
        int temp;   cin >> temp;
        v.push_back (temp);
        v2.push_back (temp);
    }

    for (int i = 0; i < n; i++) {
        sort (v.begin(), v.end(), greater < int > ());
        max += v[0];
        v[0]--;
    }
    for (int i = 0; i < n; i++) {
        sort (v2.begin(), v2.end());
        int j = 0;
        while (v2[j] <= 0) j++;
        min += v2[j];
        v2[j]--;
        
    }

    cout << max << " " << min << endl;
    return 0;
}