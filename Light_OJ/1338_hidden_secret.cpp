#include <bits/stdc++.h>

using namespace std;

#define sf(t) scanf("%d", &t);
#define pf(t) printf("%d\n", t);
#define ssii(a,b) scanf("%d%d",&a,&b)
#define cover(a,d) memset(a,d,sizeof(a)) 


int main()
{
    int test;   sf(test);
    getchar();
    int balsal = 1;

    while (test--) {
        string s;  
        string t;   

        getline(cin, s);
        getline(cin, t);

        bool ghapla_nai = true;

        map < char, int > mp;

        int s_size = s.size();
        int t_size = t.size();

        for (int i = 0; i < s_size; i++) {
            mp[tolower(s[i])]++;
        }
        for (int i = 0; i < t_size; i++) {
            mp[tolower(t[i])]--;
        }

        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it -> first != ' ' && it -> second  != 0) {
                ghapla_nai = false;
                break; 
            }
        }

        cout << "Case " << balsal << ": ";
        if (ghapla_nai) cout << "Yes" << endl;
        else cout << "No" << endl;

        balsal++;
        
    }
}