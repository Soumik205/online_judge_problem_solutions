#include <bits/stdc++.h>

using namespace std;

string s;   
string t;

bool isVowel (char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
    

bool isokay (int i) {
    return (isVowel(s[i]) == isVowel(t[i]));
}
    
int main()
{
    cin >> t;
    cin >> s;

    if (s.size() != t.size()) {
        cout << "No" << endl;
        return 0;
    }
        

    for (int i = 0; i < s.size(); i ++) {
        if (!isokay(i)) {
            cout << "No" << endl;
            return 0;
        }
            
    }
        

    cout << "Yes" << endl;
    return 0;
}