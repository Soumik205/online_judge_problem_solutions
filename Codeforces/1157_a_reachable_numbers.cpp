#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    long long n;  cin >> n;
    set < long long > s;

    for (int i = 1; i < 10; i++) s.insert(i);

    while (n >= 10) {
        s.insert (n);
        n++;
        while (n % 10 == 0) n /= 10;
    }

    cout << s.size() << endl;
    return 0;
}