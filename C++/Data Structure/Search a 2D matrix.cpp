class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int j = matrix[0].size() - 1;
        int i = 0;
        
        while(i < matrix.size() && j >= 0){
            
            if(target == matrix[i][j]){
                return true;
            }
            
            if(target < matrix[i][j]){
                j--;
            }else if(target > matrix[i][j]){
                i++;
            }
            
        }
        
        return false;
    }
};
