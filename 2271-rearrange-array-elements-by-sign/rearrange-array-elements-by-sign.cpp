class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> nums1(n,0);
        int positive=0, negative=1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                nums1[negative]=nums[i];
                negative +=2;
            }
            else{
                nums1[positive]=nums[i];
                positive +=2;
            }
        }
        return nums1;
    }
};