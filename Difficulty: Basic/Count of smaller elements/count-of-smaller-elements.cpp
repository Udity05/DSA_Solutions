
class Solution {
  public:
    int countOfElements(int x, vector<int> &arr) {

        // Code Here
        int n=arr.size();
        int count=0;
        for(int i=0; i<n;i++){
            if(x>=arr[i])
            count++;
        }
        return count;
    }
};