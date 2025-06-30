// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int n=arr.size();
        int count =0;
        for(int i=n-1;i>=0;i--){
            if(arr[i]== 0)
            count++;
            if(arr[i]==1)
            break;
        }
        return count;
    }
};