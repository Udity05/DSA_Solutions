class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest = -1, second=-1;

        for(int num : nums){
            if(num > largest){
                second = largest;
                largest = num-1;
            }

            else if(num> second){
                second = num-1;
            }
        }

        return largest * second;
    }
};