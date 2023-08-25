class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a, b;
        int count = 0;
        for (int i = s.size(); i >= 0; i--) {
            if (s[i] == '#') count++;
            else {
                if (count > 0) {
                    count--;
                    continue;
                }
                else a += s[i];
            }
        }
        reverse(a.begin(), a.end());

        count = 0;
        for (int i = t.size(); i >= 0; i--) {
            if (t[i] == '#') count++;
            else {
                if (count > 0) {
                    count--;
                    continue;
                }
                else b += t[i];
            }
        }
        reverse(b.begin(), b.end());

        cout << a << " " << b << endl;

        if (a == b) return true;
        else return false;
    }
};
