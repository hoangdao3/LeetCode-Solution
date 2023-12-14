class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length(), left = 0, maxLength = 0;
        unordered_set<char> charSet;
        for(int right = 0; right < n; right++){
            if(charSet.count(s[right]) == 0){
                charSet.insert(s[right]);
                maxLength = max(maxLength, right - left + 1);
            }
            else{
                while(charSet.count(s[right])){
                    charSet.erase(s[left]);
                    left++;
                }
                charSet.insert(s[right]);
            }
        }
    return maxLength;
    }
};