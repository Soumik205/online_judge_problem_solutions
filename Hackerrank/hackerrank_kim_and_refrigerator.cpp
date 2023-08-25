#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    int test = 10;
    int t = 0;
    int n; 
    long long sum;
    int a, b;   
    long long ans;

    while (test--) {
        ans = 100005;
        cin >> n;
        vector < pair <int, int>> v;
        vector < int > perm;

        int officex, officey, homex, homey;     cin >> officex >> officey >> homex >> homey;
        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            v.push_back(make_pair(a, b));
            perm.push_back(i + 1);
        }

        do {
            sum = 0;
            pair <int, int> temp = {officex , officey};
            for (int i = 0; i < perm.size(); i++) {
                sum += abs(v[perm[i] - 1].first - temp.first) + abs(v[perm[i] - 1].second - temp.second);
                temp = v[perm[i] - 1];
            }
            sum += abs(homex - temp.first) + abs(homey - temp.second);
            ans = min(ans , sum);
        } while (next_permutation(perm.begin(), perm.end()));
        
        cout << "# " << ++t << " " << ans << endl;
    }
}
