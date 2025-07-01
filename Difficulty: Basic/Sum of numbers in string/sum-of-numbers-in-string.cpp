

class Solution {
  public:
    // Function to calculate sum of all numbers present in a string.
    int findSum(string& s) {

        // Your code here
        int sum=0;
        int num=0;
        bool isNumber=false;
        
        for(char c:s){
            if(isdigit(c)){
                num= num*10+(c-'0');
                isNumber=true;
            }
            else{
                if(isNumber){
                    sum+=num;
                    num=0;
                    isNumber=false;
                }
            }
        }
        
        if(isNumber){
            sum += num;
        }
        return sum;
    }
};