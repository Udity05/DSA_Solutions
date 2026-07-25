// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n==1)
        return n;
        int start=1, end=n, ans;
        while(start<=end){
            int mid = start+(end-start)/2;
            bool bad = isBadVersion(mid);
            if(bad==true){
                end=mid-1;
                ans=mid;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};