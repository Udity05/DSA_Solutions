class Solution {
public:

bool canMakeBouquets(const vector<int>& bloomDay, int m, int k, int mid) {
    int bouquets = 0, flowers = 0;
    
    for (int day : bloomDay) {
        if (day <= mid) {  
            flowers++;  
            if (flowers == k) {  
                bouquets++;  
                flowers = 0; 
            }
        } else {
            flowers = 0; 
        }
        
        if (bouquets >= m) return true;  
    }
    
    return false;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long total = (long long)m*k;

        if(bloomDay.size()<total) return -1;

        int left= *min_element(bloomDay.begin(), bloomDay.end());
        int right = *max_element(bloomDay.begin(), bloomDay.end());

        while(left<right){
            int mid= (left+right)/2;

            if(canMakeBouquets(bloomDay, m, k, mid)){
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        return left;
    }
};