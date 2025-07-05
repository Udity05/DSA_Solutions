// User function Template for Java
class Solution {
    
    static long divisorsSum (long x){
        long sum=0;
        
        for(int i=1; i<=x;i++){
            if(x%i==0)
            sum+= i;
        }
        return sum;
    }
    static String isDeficient(long x) {
        // code here
        if(divisorsSum(x)<2*x)
        return "YES";
        else
        return "NO";
    }
    
}