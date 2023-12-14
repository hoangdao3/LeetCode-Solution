class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
     map<int, int> mp;
     for(int i: nums){
         if(mp.find(i) != mp.end()) {
             return true;
         }
         else{
             mp[i] =  1;
         }
     }   
     return false;
    }
};