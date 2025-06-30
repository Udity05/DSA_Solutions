class Solution {
  public:
    vector<int> findIndex(vector<int>& arr, int key) {
        // code here.
        int n=arr.size();
        int start=0,end=n-1;
        int first=-1,last=-1;
        
        while(start<=end){
            if(key==arr[start] && first==-1){
                first=start;
            }
            if(key==arr[end] && last==-1){
                last=end;
            }
            
            if(first !=-1 && last!=-1){
            break;
            }
            
            if(first == -1) start++ ;
            
            if(last == -1) end--;
        }
        return {first,last};
    }
};