class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) {
            return 0; 
        }

        sort(nums.begin(), nums.end());
        
        int count = 1, result = 1;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] == nums[i+1] - 1){
                count ++;
                if(count > result){
                    result = count;
                }
            }
            else if(nums[i] == nums[i+1]){
                continue;
            }
            else{
                count = 1;
            }
        }
         return result;
    }
};