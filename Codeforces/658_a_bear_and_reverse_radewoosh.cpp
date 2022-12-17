#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n;  cin >> n;
    int c; cin >> c;
    int limak = 0;
    int rade = 0;
    int point[n];
    int time[n];

    for (int i = 0; i < n; i++) cin >> point[i];
    for (int i = 0; i < n; i++) cin >> time[i];
    
    int t = 0;
    for (int i = 0; i < n; i ++) {
        t += time[i];
        limak += max (0, point[i] - t * c);
    }
    t = 0;
    for (int i = n - 1; i >=  0; i--) {
        t += time[i];
        rade += max (0, point[i] - t * c);
    }

    if (limak > rade ) cout << "Limak" << endl;
    else if (rade > limak) cout << "Radewoosh" << endl;
    else cout << "Tie" << endl;

    return 0;
}