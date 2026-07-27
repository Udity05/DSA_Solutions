class Solution {
public:
    int arrangeCoins(int n) {
        int low =1, high = n;
        long long coins;

        while(low<=high){
            int mid = low+(high-low)/2;
            coins =  1LL * mid * (mid + 1) / 2;

            if(coins == n){
                return mid;
            }
            else if(coins > n){
                high = mid-1;
            }
            else if(coins < n){
                low = mid +1;
            }
        }
        return high ;
    }
};