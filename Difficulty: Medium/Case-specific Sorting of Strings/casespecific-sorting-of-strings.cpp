class Solution {
  public:
    string caseSort(string& s) {
        // code here
        vector<char> upper, lower;
        
        for(char c:s){
            if(isupper(c))
            upper.push_back(c);
            else
            lower.push_back(c);
            
        }
            
            sort(upper.begin(),upper.end());
            sort(lower.begin(),lower.end());
            
        int u = 0, l = 0;
    string result = "";

    for (char c : s) {
        if (isupper(c)) result += upper[u++];
        else result += lower[l++];
    }

    return result;
    }
};