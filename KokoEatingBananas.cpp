class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = 0;
        for(int i = 0; i < piles.size(); i++){
            high = max(high, piles[i]);
        }
        int result = high;
        while(low <= high){
            int mid = (low + high) / 2;
            long int hours = 0;
            for(int i = 0; i < piles.size(); i++){
                hours += ceil((double) piles[i] / mid);
            }
            if(hours <= h){
                result = min(result, mid);
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return result;
    }
};