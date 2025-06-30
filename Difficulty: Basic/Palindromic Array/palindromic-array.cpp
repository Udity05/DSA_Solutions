/*Complete the function below*/

class Solution {
  public:
  
  bool isPalindrome(int num){
      int m=num;
      int rev=0;
      while(num>0){
       int digit=num%10;
       rev = (rev*10)+digit;
       num=num/10;
      }
      return m==rev;
  }
    bool isPalinArray(vector<int> &arr) {
        // code here
        for(int num:arr){
            if(!isPalindrome(num))
            return false;
        }
        return true;
    }
};