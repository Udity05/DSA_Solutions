// User function Template for Java
class Solution {
    static boolean armstrongNumber(int n) {
        // code here
        int m=n;
        int num=0;
        double sum=0;
        while(n>0){
            num=n%10;
            sum += Math.pow(num,3);
            n=n/10;
        }
      return sum==m;
    }
}