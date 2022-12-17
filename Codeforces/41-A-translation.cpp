#include <bits/stdc++.h>

using namespace std;

int main()
{
    string first;
    string second;

    cin >> first >> second;

    reverse (first.begin(), first.end());

    if ( first == second) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}