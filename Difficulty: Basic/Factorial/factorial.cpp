class Solution {
  public:
    int factorial(int n) {
        // code here
         int num=1;
        for(int i=1;i<=n;i++){
            num *= i;
        }
        return num;
    }
};