#include<bits/stdc++.h>
using namespace std;
 
typedef long long LL;

bool cmp (pair <int, int> a, pair <int, int> b) {
    if (a.first > b.first) return true;
    if (a.first < b.first) return false;

    return a.second < b.second;
}
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout);
    #endif
    
    int n, x, y, z;     cin >> n >> x >> y >> z;
    vector < pair < int, int >> math, eng, total;
    vector < int > ans;
    bool flag[n + 1];
    memset (flag, false, sizeof(flag));
    
    for (int i = 0; i < n; i++) {
        int temp;   cin >> temp;
        math.push_back(make_pair(temp, i + 1));
    }
    for (int i = 0; i < n; i++) {
        int temp;   cin >> temp;
        eng.push_back(make_pair(temp, i + 1));
        temp = math[i].first + temp;
        total.push_back(make_pair(temp, i + 1));
    }

    sort (math.begin(), math.end(), cmp);
    sort (eng.begin(), eng.end(), cmp);
    sort (total.begin(), total.end(), cmp);

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < n; j++) {
            if (!flag[math[j].second]) {
                ans.push_back(math[j].second);
                flag[math[j].second] = true;
                break;
            }
        }
    }
    
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < n; j++) {
            if (!flag[eng[j].second]) {
                ans.push_back(eng[j].second);
                flag[eng[j].second] = true;
                break;
            }
        }
    }
    // for (int i = 0; i < n; i++) cout << flag[i] << endl;
    for (int i = 0; i < z; i++) {
        for (int j = 0; j < n; j++) {
            if (!flag[total[j].second]) {
                ans.push_back(total[j].second);
                flag[total[j].second] = true;
                break;
            }
        }
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << endl;
    return 0;
}