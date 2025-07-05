// User function Template for Java

class Solution {
    
    int Factorial(int N){
        int num=1;
        for(int i=1;i<=N;i++){
            num *= i;
        }
        return num;
    }
    int isPerfect(int N) {
        // code here
        int M=N;
        int sum=0;
        int num1;
        while(N>0){
            num1=N%10;
            sum +=Factorial(num1);
            N /=10;
        }
        if(sum==M)
        return 1;
        else
        return 0;
    }
}