class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long n=size(arr);
        
        long long total=(n+1)*(n+2)/2;
        long sum=0;
        
        for(int i=0; i<n;i++){
            sum+= arr[i];
        }
        
        return total-sum;
        
    }
};