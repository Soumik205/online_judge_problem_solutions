#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    int a, b;   cin >> a >> b;
    int count = 0;

    while (a and b) {
        if (a == 1 and b == 1) {
            cout << count << endl;
            return 0;
        }
        if (a <= b) {
            a++;
            b -= 2;
            count++;
        }
        else {
            b++;
            a -= 2;
            count++;
        }
    }

    cout << count << endl;
    return 0;
}