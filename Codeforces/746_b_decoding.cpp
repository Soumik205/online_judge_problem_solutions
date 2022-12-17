#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n;  cin >> n;
    string s;   cin >> s;
    char arr[n];

    int start = 0;
    int end = n - 1;
    int mark = n - 1;

    if (n & 1) {
        for (int i = n - 1; i >= 0; i--) {
            if (i == 0) {
                int mid = (n - 1) / 2;
                arr[mid] = s[i];
            }
            else if (i & 1) {
                arr[start] = s[i];
                start++;
            }
            else {
                arr[end] = s[i];
                end--;
            }
        }
    }
    else {
        for (int i = n - 1; i >= 0; i--) {
            if (i & 1) {
                arr[end] = s[i];
                end--;
            }
            else {
                arr[start] = s[i];
                start++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }

    cout << endl;
    return 0;
}