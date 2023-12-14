class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lowRow = 0;
        int highRow = matrix.size() - 1;
        while (lowRow < highRow){
            int mid = (lowRow + highRow) / 2;
            if(matrix[mid][0] == target){
                return true;
            }
            if(matrix[mid][0] < target && matrix[mid + 1][0] > target){
                lowRow = mid;
                break;
            }
            if(matrix[mid][0] < target){
                lowRow = mid + 1;
            }
            else{
                highRow = mid - 1;
            }
        }
        int lowCol = 0;
        int highCol = matrix[0].size() - 1;
        while(lowCol <= highCol){
            int mid = (lowCol + highCol) / 2;
            if(matrix[lowRow][mid] == target){
                return true;
            }
            if(matrix[lowRow][mid] > target){
                highCol = mid - 1;
            }
            else {
                lowCol = mid + 1;
            }
        }
        return false;
    }
};