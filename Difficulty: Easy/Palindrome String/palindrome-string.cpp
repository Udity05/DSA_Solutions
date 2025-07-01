class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        // code here
       int n=s.size();
       int left=0, right=n-1;
       
       while(left<right){
           if(s[left]!=s[right]){
               return false;
           }
           left++;
           right--;
       }
       return true;
    }
};