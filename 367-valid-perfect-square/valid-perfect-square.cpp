class Solution {
public:
    bool isPerfectSquare(int num) {
        int start=1, end=num;

        while(end>=start){
            long long mid = start+(end-start)/2;

            if((mid*mid)==num){
                return true;
                break;
            }
            else if ((mid*mid)>num){
                end = mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return false;
    }
};