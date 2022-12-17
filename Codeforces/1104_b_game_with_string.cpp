#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", 'w', stdout);

    string s;   cin >> s;
    int size = s.size();
    stack < char > st;
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (!st.empty()) {
            if (st.top() == s[i]) {
                count++;
                st.pop();
            }
            else st.push(s[i]);
        }
        else st.push(s[i]);
    }

    if (count & 1) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}