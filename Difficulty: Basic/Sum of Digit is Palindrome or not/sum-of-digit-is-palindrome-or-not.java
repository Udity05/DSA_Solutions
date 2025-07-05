// User function Template for Java

class Solution {
    boolean isDigitSumPalindrome(int n) {
        // code here
        int num=0, t=0;
        while(n>0){
            num=n%10;
            t += num;
            n /=10;
        }
        
        if(t>9){
            int m=t;
            int rev=0;
            while(t>0){
                num =t%10;
                rev=(rev*10)+num;
                t /=10;
            }
            if(rev!=m)
            return false;
        }
        return true;
    }
}