class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        int maxi=arr[0], prefix=0, n=arr.size();
        
        for(int i=0; i<n;i++){
            prefix += arr[i];
            maxi= max(prefix, maxi);
            if(prefix<0)
            prefix=0;
        }
        return maxi;
    }
};