#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    while (true) {
        int n;  cin >> n;
        if (n == 0) return 0;

        int incr = 1;
        int value = 2;
        while (value < n) {
            value = pow (2, incr);
            incr++;
        }
        value -= (value - n) * 2;
        if (n == 1) value = 1;
        cout << value << endl;
    }
    return 0;
}

//g++ -o a.exe compiler.cpp
