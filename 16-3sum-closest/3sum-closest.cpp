class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closestSum= nums[0]+nums[1]+nums[2];
        for(int i=0; i<nums.size()-2; ++i){
            int left=i+1, right=nums.size()-1;
            while(left<right){
                int CurrentSum= nums[i]+nums[left]+nums[right];
                if(abs(target-CurrentSum) < abs(target-closestSum)){
                    closestSum = CurrentSum;
                }
                if(CurrentSum < target){
                    ++left;
                }
                else{
                    --right;
                }
            }
        }
    return closestSum;
    }
};