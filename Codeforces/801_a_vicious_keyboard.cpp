#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    string s;   cin >> s;
    int size = s.size();
    int count = 0;
    bool flag = true;
    
    if (size == 1) {
        cout << count << endl;
        return 0;
    }
    for (int i = 0; i < size - 1; i++) {
        if (s[i] == 'V' and s[i + 1] == 'K') {
            count++;
            i++;
        }
        else if (s[i] == 'V' and s[i + 1] == 'V') {
            if (size - i > 2 and s[i + 2] == 'K') {
                continue;
            }
            else {
                if (flag) {
                    count++;
                    flag = false;
                    i++;
                }
                
            }
        }
        else if (s[i] == 'K' and s[i + 1] == 'K') {
            if (i - size < 2 and s[i - 1] == 'V') {
                continue;
            }
            else {
                if (flag) {
                    count++;
                    flag = false;
                    i++;
                }
                
            }
        }
        
    }
    cout << count << endl;
    return 0;
}