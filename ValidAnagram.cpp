class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int store[26] = {0}; // Initialize an array of size 26 with zeros
        for (int i = 0; i < s.length(); i++) {
            store[s[i] - 'a']++;
            store[t[i] - 'a']--;
        }

        for (int n : store) {
            if (n != 0) return false;
        }

        return true;
    }
};
