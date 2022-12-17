#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    string s;   
    string t;

    while (getline (cin, s)) {
        getline (cin, t);

        int s_total = 0;
        int t_total = 0;

        for(int i = 0; i < s.size(); i++) {
            if (islower(s[i])) s_total += s[i] - 'a' + 1;
            else if (isupper(s[i])) s_total += s[i] - 'A' + 1;
        }
        
        if (s_total % 9 == 0) s_total = 9;
        else s_total %= 9;
        
        for (int i = 0; i < t.size(); i++) {
            if (islower(t[i])) t_total += t[i] - 'a' + 1;
            else if (isupper(t[i])) t_total += t[i] - 'A' + 1;
        }
        
        if (t_total % 9 == 0) t_total = 9;
        else t_total %= 9;
        
        if (s_total >= t_total) printf("%.2f %c\n", (t_total * 100.0 ) / s_total, '%');
        else printf("%.2f %c\n", (s_total * 100.0) / t_total, '%');
    }
    return 0;
}