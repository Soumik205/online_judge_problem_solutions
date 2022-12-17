#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    string s;   cin >> s;
    int size = s.size();
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u') count++;
        else if (s[i] == '1' or s[i] == '3' or s[i] == '5' or s[i] == '7' or s[i] == '9') count++;
    }
    cout << count << endl;
    return 0;
}