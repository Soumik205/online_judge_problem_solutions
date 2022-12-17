#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    long long n;    cin >> n;
    long long count = 0;

    count += n / 100;
    n %= 100;
    count += n / 20;
    n %= 20;
    count += n / 10;
    n %= 10;
    count += n / 5;
    n %= 5;
    count += n / 1;
    n %= 1;

    cout << count << endl;
    return 0;
}