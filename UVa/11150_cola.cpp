#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n, k;   
    while (cin >> n) {
        int k = 3;
        int count = n;
        int bottle = n;

        while (bottle >= k) {
            int temp = bottle / k;
            count += temp;
            bottle -= temp * k;
            bottle += temp;
        }
        if (bottle == 2) count++;
        cout << count << endl;
    }
    return 0;
}