#include<iostream>
using namespace std;


int main() {
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    int k;  cin >> k;
    string s;   cin >> s;
    int ans = 0;
    int level = -1;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') level++;
        else if (s[i] == ')') level--;
        else if (level == k) {
            int temp = s[i] - '0';
            i++;
            while (s[i] >= '0' && s[i] <= '9') {
                int d = s[i] - '0';
                temp = temp * 10 + d;
                i++;
            }
            i--;
            ans += temp;
        }
    }

    cout << ans << endl;
    return 0;
}