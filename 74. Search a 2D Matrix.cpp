class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int m=matrix[0].size()-1;
        while(i<matrix.size() && m>=0){
            if(matrix[i][m]<target)      i++;
            else if(matrix[i][m]>target) m--;
            else                         return true;
        }
        return false;
    }
};
