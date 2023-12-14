class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int count = 0;
       long p = 1;
       vector<int> result;
       for(int i = 0; i < nums.size(); i++){
           if(nums[i] == 0) count ++;
           else{
               p*=nums[i];
           }
       }
       for(int i = 0; i < nums.size(); i++){
           if(count == 0){
               result.push_back(p/nums[i]);
           }
           else if(count == 1){
               if(nums[i] == 0){
                   result.push_back(p);
               }
               else{
                   result.push_back(0);
               }
           }
           else if(count > 1){
               result.push_back(0);
           }
       } 
       return result;
    }
};