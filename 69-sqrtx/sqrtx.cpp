class Solution {
public:
    int mySqrt(int x) {
        int ans=0, start=1,end=x;
        while(start<=end){
            long long mid=start+(end-start)/2;
            if(mid*mid == x){
                ans=mid;
                break;
            }
            else if(mid*mid<x){
                ans=mid;
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
    }
};