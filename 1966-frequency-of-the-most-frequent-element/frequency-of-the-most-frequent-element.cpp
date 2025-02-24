class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
      if (nums.empty()) return 0; 
    sort(nums.begin(), nums.end()); 
    long long left = 0, totalOperations = 0, maxFreq = 1;

    for (long long right = 0; right < nums.size(); right++) {
        if (right > 0) { 
            totalOperations += (long long)(nums[right] - nums[right - 1]) * (right - left);
        }

        while (totalOperations > k) {
            totalOperations -= (nums[right] - nums[left]);
            left++;
        }
        maxFreq = max(maxFreq, right - left + 1);
    }
    return maxFreq;
    }
};