#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    set < long long > s;

    int loop = 4;
    while (loop--) {
        long long temp;     cin >> temp;
        s.insert(temp);
    } 

    cout << 4 - s.size() << endl;
    return 0;
}