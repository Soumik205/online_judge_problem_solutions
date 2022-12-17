#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", 'w', stdout);

    int n;  cin >> n;
    int m;  cin >> m;
    vector < int > check;
    vector < int > fing;

    for (int i = 0; i < n; i++) {
        int temp;   cin >> temp;
        check.push_back(temp);
    }
    for (int i = 0; i < m; i++) {
        int temp;   cin >> temp;
        fing.push_back(temp);
    }

    //reverse (fing.begin(), fing.end());
    //int index = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (fing[j] == check[i]) {
                cout << fing[j] << " ";
                //index = j;
            }
        }
    }
    cout << endl;
    return 0;
}