class Solution {
public:
    string sortSentence(string s) {
        vector<string> result(9);
        string word;

        for(int i=0; i<s.size();i++){
            if(s[i]==' ')
            continue;

            word="";
            while(i<s.size() && s[i] != ' '){
                word += s[i++];
            }

            int pos=word.back()-'0';
            word.pop_back();
            result[pos-1]= word;
        }
        string ans;
        for(const string& w : result){
            if(!w.empty()){
                if(!ans.empty())
                ans+=" ";
                ans +=w;
            }
        }
        return ans;
    }
};