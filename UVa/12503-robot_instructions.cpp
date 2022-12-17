#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    int tc;    cin >> tc;

    while (tc--) {
        int command;    cin >> command;
        string s, t;
        int arr[101];
        int count = 0;
        int temp;
        memset (arr, 0, sizeof arr);

        for (int i = 0; i < command; i++) {
            cin >> s;

            if (s[0] == 'L'){
                count += -1;
                arr[i] = -1;
            }
            else if (s[0] == 'R') {
                count += 1;
                arr[i] = 1;
            }
            else {
                cin >> t >> temp;
                count += arr[temp - 1];
                arr[i] = arr[temp - 1];
            }
        }

        cout << count << endl;
    } 

    return 0;   
}