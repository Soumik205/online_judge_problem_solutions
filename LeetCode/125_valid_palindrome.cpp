class Solution {
public:
    bool isPalindrome(string s) {
        string test;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') test += s[i];
            else if (s[i] >= 'A' && s[i] <= 'Z') test += tolower(s[i]);
            else if (s[i] >= '0' && s[i] <= '9') test += s[i];
        }
        
        for (int i = 0, j = test.size() - 1; i < j; i++, j--) {
            if (test[i] != test[j]) return false;
        }
        return true;
    }
};
