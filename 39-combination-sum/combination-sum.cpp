class Solution {
public:

void backtrack(int idx, vector<int>& candidates, int target, vector<int>& path, vector<vector<int>>& res){
    if(target==0){
        res.push_back(path);
        return;
    }
    if(target<0) return;

    for(int i=idx;i<candidates.size();++i){
        path.push_back(candidates[i]);
        backtrack(i,candidates,target-candidates[i],path,res);
        path.pop_back();
    }
}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> current;
        backtrack(0,candidates,target,current,ans);
        return ans;
    }
};