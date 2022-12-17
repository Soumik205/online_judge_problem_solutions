#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    int n, m;   cin >> n >> m;
    string s[1002];
    long long sum = 0;
    int marks[m];

    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < m; i++) cin >> marks[i];

    for (int j = 0; j < m; j++) {
        int countA = 0;
        int countB = 0; 
        int countC = 0;
        int countD = 0;
        int countE = 0;
        for (int i = 0; i < n; i++) {
            char temp = s[i][j];
            switch (temp) {
                case 'A' : countA++; break;
                case 'B' : countB++; break;
                case 'C' : countC++; break;
                case 'D' : countD++; break;
                case 'E' : countE++; break;
            }
        }
        int maximum = max (countA, max (countB, max (countC, max (countD, countE))));
        sum += maximum * marks[j];
    }
    cout << sum << endl;
    return 0;
}