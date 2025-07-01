// User function template for c++
class Solution {
  public:
    string removeChars(string str1, string str2) {
        // code here
        bool present[26]={0};
        
        for(char c: str2){
            present[c-'a']=true;
        }
        
        string result="";
        
        for(char c:str1){
            if(present[c-'a']!= true){
                result += c;
            }
        }
        
        return result;
    }
};
