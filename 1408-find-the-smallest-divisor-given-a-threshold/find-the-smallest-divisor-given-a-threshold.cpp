class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left=1, right=*max_element(nums.begin(), nums.end());

        while(left<right){
            int mid=(left+right)/2;
            int sum=0;
            
            for (int num : nums) {
                sum += ceil((double)num / mid);
            }

             if (sum <= threshold) {
                right = mid;  
            } else {
                left = mid + 1; 
            }
        }
        return left;
    }
};