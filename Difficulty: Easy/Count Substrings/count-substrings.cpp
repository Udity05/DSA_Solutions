// User function template for C++
class Solution {
  public:

    int countSubstr(string S) {
        // your code here
        int count=0;
        int occurance=0;
        for(char c:S){
            if(c=='1'){
                count++;
            }
        }
        occurance = (count * (count-1))/2;
        return occurance;
    }
};