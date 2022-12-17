#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    set < string > st;
    string s;

    while (getline (cin, s)) {
        string temp = "";
        int size = s.size();

        for (int i = 0; i < size; i++) {
            if (isalpha (s[i]) != 0) {
                temp += tolower (s[i]);
            }
            else if (temp != "") {
                st.insert (temp);
                temp = "";
            }
        }
        if (temp != "") {
            st.insert (temp);
            temp = "";
        }
    }
    for (set < string > :: iterator it = st.begin(); it != st.end(); it++) {
            cout << *it << endl;
    }
    return 0;
}
