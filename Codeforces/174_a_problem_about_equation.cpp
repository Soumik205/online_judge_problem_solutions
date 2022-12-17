#include <bits/stdc++.h>
using namespace std;

typedef long long idouble;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    double n, b;    cin >> n >> b;
    vector < double > v;
    double max = 0;
    double min = 200;
    double total = 0;

    for (int i = 0;  i < n; i++) {
        double temp;     cin >> temp;
        v.push_back(temp);
        if (temp > max) max = temp;
        else if (temp < min) min = temp;
        total += temp;
    }

    double avg = (total + b) / n;

    if (max > avg) {
        cout << "-1" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << fixed << setprecision(9) << avg - v[i] << endl;
    }

    return 0;
}
