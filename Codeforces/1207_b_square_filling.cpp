#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair < long long, long long > pairs;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    ll n, m;    cin >> n >> m;
    ll arr[n][m];
    ll noof1 = 0;
    vector < pair < ll, ll > > v;
    set < pair < ll, ll > > s;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
            if (arr[i][j] == 1) noof1++;
        }
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m - 1; j++) {
            if ((arr[i][j] == 1) and (arr[i + 1][j] == 1) and (arr[i][j + 1] == 1) and (arr[i + 1][j + 1] == 1)) {
                v.push_back(make_pair (i + 1, j + 1));

                pairs temp1 = make_pair (i, j);
                pairs temp2 = make_pair (i + 1, j);
                pairs temp3 = make_pair (i, j + 1);
                pairs temp4 = make_pair (i + 1, j + 1);
                s.insert(temp1);
                s.insert(temp2);
                s.insert(temp3);
                s.insert(temp4);
            }
        }
    }
    ll size = s.size();

    //cout << size << endl;
    //cout << noof1 << endl;
    //cout << v.size() << endl;
    
    if (size != noof1) {
        cout << "-1" << endl;
        return 0;
    } 
    
    else {
        cout << v.size() << endl;
        for (int i = 0; i < v.size(); i++) {
            cout << v[i].first << " " << v[i].second << endl;
        }
    } 
    
    return 0;
}
