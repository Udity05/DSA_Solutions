class Solution {
  public:
    bool check_elements(int arr[], int n, int A, int B) {
        // Your code goes here
        
        unordered_set<int> arr1;
        for(int i=0;i<n;i++){
            arr1.insert(arr[i]);
        }
        
        for(int i=A; i<=B;i++){
            if(arr1.find(i)==arr1.end())
            return false;
        }
        return true;
    }
};
