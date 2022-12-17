#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int test;   cin >> test;

    while (test--) {
        string s;
        int n;  cin >> n;
        map < int , int > mp; 
        int count = 0;

        for (int i = 1; i <= n; i++) s += to_string(i);
        
        int size = s.size();
        for (int i = 0; i < 10; i++) mp[i] = 0;
        for (int i = 0; i < size; i++) mp[s[i] - '0']++;

        for (auto it = mp.begin(); it != mp.end(); it++) {
            cout << it -> second;
            if (count < 9) cout << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}