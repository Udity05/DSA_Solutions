// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        unordered_set<char> seen;
        string result=" ";
        
        for(char c:s){
            if(seen.find(c)==seen.end()){
                result += c;
                seen.insert(c);
            }
        }
        return result;
    }
};