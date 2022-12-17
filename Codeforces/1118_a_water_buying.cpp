#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;   cin >> test;

    while (test--)
    {
        long long n;  cin >> n;
        long long a;  cin >> a;
        long long b;  cin >> b;

        if (2 * a <= b) {
            cout << n * a << endl;
        }
        else {
            if (n % 2 == 0) {
                cout << (n * b) / 2 << endl;
            }
            else {
                cout << ( ( (n - 1 ) * b) / 2) + a << endl;
            }
        }
    }
    return 0;
}