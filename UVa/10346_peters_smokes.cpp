#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n, k;   
    while (cin >> n) {
        cin >> k;
        int count = n;
        int ciger = n;

        while (ciger >= k) {
            int temp = ciger / k;
            count += temp;
            ciger -= temp * k;
            ciger += temp;
        }
        cout << count << endl;
    }
    return 0;
}