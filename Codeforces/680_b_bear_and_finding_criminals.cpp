#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n, a;   cin >> n >> a;
    vector < int > v;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int temp;   cin >> temp;
        v.push_back (temp);
    }

    int size = min ((a - 1), (n - a));
    int left_index = a - 1;
    int right_index = a - 1;

    for (int i = 0; i <= size; i++) {
        if (v[left_index] == 1 and v[right_index] == 1) {
            if (left_index == right_index) count++;
            else count += 2;
        }
        v[left_index] = 0;
        v[right_index] = 0;

        if (left_index >= 0) left_index--;
        if (right_index < n) right_index++;
    }

    for (int i = 0; i < n; i++) {
        if (v[i] == 1) count++;
    }

    cout << count << endl;
    return 0;
}