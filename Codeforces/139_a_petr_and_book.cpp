#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    int n;  cin >> n;
    int count = 0;
    int day = 0;
    vector < int > v;

    for (int i = 0; i < 7; i++) {
        int temp;   cin >> temp;
        v.push_back (temp);
    }

    int i = 0;
    while (count < n) {
        if (i == 7) i = 0;
        day++;
        count += v[i];
        
        i++;
    }

    //cout << day << endl;

    int ans = day % 7;
    //cout << ans << endl;

    if (ans == 0) {
        cout << "7" << endl;
        return 0;
    }
    cout << ans << endl;
    return 0;
}

//7