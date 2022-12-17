#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n;  cin >> n;
    long long prev = 0;
    int count = 0; 
    int maximum = 1;

    for (int i = 0; i < n; i++) {
        long long temp;     cin >> temp;
        if (temp >= prev) {
            count++;
            maximum = max (maximum, count);
        }
        else count = 1;

        prev = temp;
    }

    cout << maximum << endl;
    return 0;
}