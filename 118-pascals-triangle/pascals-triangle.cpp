class Solution {
public:

    vector<int> generateRow(int row){
        long long ans=1;
        vector<int> ansRow;
        ansRow.push_back(ans);
        for(int j=1; j<row;j++){
            ans = ans*(row-j);
            ans= ans/ (j);
            ansRow.push_back(ans);
        }
        return ansRow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i<=numRows; i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};