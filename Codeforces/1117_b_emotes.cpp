#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", 'w', stdout);

    long long n;  scanf ("%lld", &n);
    long long m;  scanf ("%lld", &m);
    long long k;  scanf ("%lld", &k);
    long long count = 0;

    vector < long long > v;

    for (int i = 0; i < n; i++) {
        long long temp;   scanf ("%lld", &temp);
        v.push_back (temp);
    }

    sort (v.begin(), v.end());
    long long max = v[n - 1];
    long long min = v[n - 2];

    count = (m /(k + 1)) * ((max * k) + min) + (m % (k + 1)) * max;

    printf ("%lld\n", count);
    return 0;
}