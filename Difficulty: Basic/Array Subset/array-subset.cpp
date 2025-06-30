class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        unordered_map<int, int> freq;
        int n=a.size();
        int m=b.size();
        
        for(int i=0;i<n;i++){
            freq[a[i]]++;
        }
        
        for(int j=0;j<m;j++){
            if(freq[b[j]] > 0){
                freq[b[j]]--;
            }else{
                return false;
            }
        }
        return true;
    }
};