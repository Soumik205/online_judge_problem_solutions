class Solution {
public:
    bool isAnagram(string s, string t) {
        vector < int > v(26);
        for (int i = 0; i < s.size(); i++) {
            int temp = s[i] - 'a';
            v[temp]++;
        }
        for (int i = 0; i < t.size(); i++) {
            int temp = t[i] - 'a';
            v[temp]--;
        }
        for (int i = 0; i < v.size(); i++) {
            if (v[i] != 0) return false;
        }
        return true;
    }
};
