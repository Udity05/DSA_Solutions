/*Complete the Function below*/
class Solution {
    public static boolean isPalindrome(int num){
        int rev=0;
        int m=num;
        
        while(num>0){
            int digit=num%10;
            rev =(rev*10)+digit;
            num =num/10;
        }
        return m==rev;
    }
    public static boolean isPalinArray(int[] arr) {
        // add code here.
        for(int i :arr){
            if(!isPalindrome(i))
            return false;
        }
        return true;
    }
}