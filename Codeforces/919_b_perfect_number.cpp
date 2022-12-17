#include <bits/stdc++.h>

using namespace std;

#define MX 1000006

int sod (long long n) 
{
    int sum = 0;

    while (n) {
        int temp = n % 10;
        sum += temp;
        n /= 10;
    }
    return sum;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int k;  cin >> k;
    int ans = 19;
    int count = 1;

    while (1) {
        if (count == k) {
            cout << ans << endl;
            return 0;
        }
        ans += 9;
        if (sod(ans) == 10) count++;
    }

    return 0;
}