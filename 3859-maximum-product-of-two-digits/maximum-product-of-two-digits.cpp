class Solution {
public:
    int maxProduct(int n) {
        int largest=-1, second_largest=-1;
        while(n>0){
            int s=n%10;
            if(s>largest){
            second_largest = largest;
            largest=s;
            }
            else if(s>=second_largest)
            second_largest =s;
            n/=10;
        }
        return largest*second_largest;
    }
};