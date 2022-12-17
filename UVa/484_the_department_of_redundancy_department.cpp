#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    map < int , int > mp;
    map < int , bool > flag;
    vector < int > v;

    int n;  
    while (cin >> n) {
        v.push_back (n);
        mp[n]++;
    }
    int size = v.size();

    for (int i = 0; i < size; i++) {
        int temp = v[i];
        if (!flag[temp]) {
            cout << temp << " " << mp[temp] << endl;
            flag[temp] = true;
        }
    }
    return 0;
}