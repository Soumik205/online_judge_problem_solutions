#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1;
    string str2;
    string str3;

    cin >> str1 >> str2 >> str3;

    str1 += str2;

    sort( str1.begin() , str1.end());
    sort( str3.begin() , str3.end());

    //cout << str1 << "  " << str3 << endl;

    if (str1 == str3) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;

}