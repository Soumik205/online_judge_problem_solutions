#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;   cin >> test;
    int t = 0;

    //getchar();

    while (test--) {
        int n;  cin >> n;
        int arr[n];
        vector < string > v;
        string s;
        int a, b, c;
        int total = 0;
        int sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> s;
            v.push_back(s);

            cin >> a >> b >> c;
            total = a * b * c;
            arr[i] = total;
            sum += total;
            total = 0;
        }

        int max = arr[0];
        int max_id = 0;
        int min = arr[0];
        int min_id = 0;
        int avg = sum / n;



        for (int i = 1; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
                max_id = i;
            }
            if (arr[i] < min ) {
                min = arr[i];
                min_id = i;
            }
        }

        if (min == max && max == avg) {
            cout << "Case " << ++t << ": " << "no thief" << endl;
        }
        else if (max > avg) {
            cout <<"Case " << ++t << ": " << v[max_id] << " took chocolate from " << v[min_id] << endl;
        }

    }

    return 0;
}