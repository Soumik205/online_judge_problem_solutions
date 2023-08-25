class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());

        int arr[26];
        memset (arr, 0, sizeof arr);

        for (int i = 0; i < ransomNote.size(); i++) {
            arr[ransomNote[i] - 'a']++;
        }
        for (int i = 0; i < magazine.size(); i++) {
            int temp = magazine[i] - 'a';
            if (arr[temp] > 0) arr[temp]--;
        }
        for (int i = 0; i < 26; i++) {
            if (arr[i] != 0) return false;
        }
        return true;
    }
};
