#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    string s;   
    while (getline (cin , s)) {
        int size = s.size();
        int count = 0;
        bool flag = false;
        for (int i = 0; i < size; i++) {
            if ((s[i] >= 'A' && s[i] <= 'Z') or (s[i] >= 'a' && s[i] <= 'z')) flag = true;
            else {
                if (flag) {
                    count++;
                    flag = false;
                }
            }
        }
        if (flag) count++;
        cout << count << endl;
    }
    return 0;
}