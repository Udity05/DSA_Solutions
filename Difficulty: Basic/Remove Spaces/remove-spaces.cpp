class Solution {
  public:
    string modify(string& s) {
        // code here.
        string result="";
    for(char c:s){
        if(c != ' '){
            result += c;
        }
    }
    return result;
    }
};