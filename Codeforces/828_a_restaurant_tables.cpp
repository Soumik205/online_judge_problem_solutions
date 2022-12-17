#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n;      cin >> n;
    int one;    cin >> one;
    int two;    cin >> two;
    int temp;
    int two_half = 0;
    int ans = 0;

    while (n--) {
        cin >> temp;
        if (temp == 1) {
            if (one >= 1) one--;
            else if (two >= 1) {
                two--;
                two_half++;
            }
            else if (two_half >= 1) two_half--;
            else ans++;
        }
        else {
            if (two >= 1) two--;
            else ans += 2;
        }
    }

    cout << ans << endl;
    return 0;
}