class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         if (matrix.empty() || matrix[0].empty()) return false;
         
        int N=matrix.size(), M=matrix[0].size();
        int row_index, col_index,start=0, end=N*M-1,mid;

        while(start<=end){
            mid= start+(end-start);
            row_index = mid/M;
            col_index = mid%M;

            if(matrix[row_index][col_index]==target)
            return 1;
            if(matrix[row_index][col_index]<target)
            start=mid+1;
            else
            end=mid-1;
        }
        return 0;
    }
};