#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    long long dp[10000];
    long long test;   cin >> test;
    long long t = 0;

    while (test--) {
        cin >> dp[0] >> dp[1] >> dp[2] >> dp[3] >> dp[4] >> dp[5];
        cin >> n;

        for (int i = 6; i <= n; i++) {
            dp[i] = ( dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4] + dp[i - 5] + dp[i - 6] ) % 10000007;
        }

        printf ("Case %lld: %lld\n", ++t, dp[n] % 10000007);
    }
    return 0;
}


//Another Solution
/*
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair < long long, long long > pairs;


ll dp[10002];

int fn (int n) {
    if (dp[n] != -1) {
        return dp[n] % 10000007;
    }
    else {
        dp[n] = fn(n - 1) + fn(n - 2) + fn(n - 3) + fn(n - 4) + fn(n - 5) + fn(n - 6) % 10000007;
        return dp[n] % 10000007;
    }
}

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    ll test;    cin >> test;
    ll t = 0;

    while (test--) {
        ll n;
        cin >> dp[0] >> dp[1] >> dp[2] >> dp[3] >> dp[4] >> dp[5];
        cin >> n;
        for (int i = 6; i <= n; i++) dp[i] = -1;

        ll ans = fn(n) % 10000007;
        printf ("Case %lld: %lld\n", ++t, ans % 10000007);
    }
    return 0;
}

*/