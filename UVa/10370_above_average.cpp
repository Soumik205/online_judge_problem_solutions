#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int test;   cin >> test;
    while (test--) {
        double n;  cin >> n;
        vector < int > v;
        double total = 0;

        for (int i = 0; i < n; i++) {
            int temp;   cin >> temp;
            v.push_back (temp);
            total += temp;
        }
        double avg = (total / v.size());
        double count = 0;

        for (int i = 0; i < v.size(); i++) {
            if (v[i] > avg) count++;
        }
        printf ("%0.3lf%c\n", (count * 100) / n, '%');
    }
    return 0;
}

//g++ -o a.exe compiler.cpp
