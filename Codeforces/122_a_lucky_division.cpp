#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n;  cin >> n;
    int arr[12] = {4, 7, 47, 74, 444, 447, 477, 777, 474, 744, 747, 774};

    for (int i = 0; i < 12; i++) {
        if (n % arr[i] == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}