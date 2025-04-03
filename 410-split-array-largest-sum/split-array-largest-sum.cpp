class Solution {
public:

bool canSplit(vector<int>& nums, int k, int maxSum){
    int subArray_count=1, countSum=0;

    for(int num:nums){
        if(countSum + num > maxSum){
            subArray_count++;
            countSum = num;
            if (subArray_count > k) return false;
        }
        else{
            countSum += num;
        }
    }
    return true;
}
    int splitArray(vector<int>& nums, int k) {
        int left = *max_element(nums.begin(), nums.end());
        int right= accumulate(nums.begin(), nums.end(),0);

        while(left<right){
            int mid = (left+right)/2;

            if(canSplit(nums,k,mid)){
                right=mid;
            }
            else{
                left= mid+1;
            }
        }
        return left;
    }
};