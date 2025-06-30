class Solution {
  public:
    void rearrange(vector<int>& arr) {
        // Your code here
        int n=arr.size();
        int temp[n];
        sort(arr.begin(),arr.end());
        
        int minIdx=0, maxIdx=n-1;
        
        for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            temp[i] = arr[maxIdx];
            maxIdx--;
        } else {
            temp[i] = arr[minIdx];
            minIdx++;
        }
        }
        
        for(int i=0;i<n;i++){
            arr[i]=temp[i];
        }
    }
};