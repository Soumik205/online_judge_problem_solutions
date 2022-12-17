#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n;  cin >> n;
    vector < long long > start;
    vector < long long > end;
    int min_index = 0;
    int max_index = 0;

    for (int i = 0; i < n; i++) {
        long long a, b;     cin >> a >> b;
        start.push_back (a);
        end.push_back (b);
    }

    long long max = *max_element (end.begin(), end.end());
    long long min = *min_element (start.begin(), start.end());

    for (int i = 0; i < n; i++) {
        if (start[i] == min and end[i] == max) {
            cout << i + 1 << endl;
            return 0;
        }   
    }
    cout << "-1" << endl;
    return 0;
}