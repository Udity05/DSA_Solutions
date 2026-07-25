class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> seen;
        unordered_set<int> result;
       

        for(int i =0; i<nums1.size(); i++){
            seen.insert(nums1[i]);
        }

        for(int i=0;i<nums2.size();i++){
            if(seen.count(nums2[i])){
            result.insert(nums2[i]);
            }
        }
         vector<int> ans(result.begin(), result.end());
        return ans;
    }
};