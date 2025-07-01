
class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string &s) {
        // code here
        vector<string> words;
        string word;
        stringstream ss(s);

        // Step 1: Split into words
        while (ss >> word) {
            words.push_back(word);
        }

        // Step 2: Reverse the list of words
        reverse(words.begin(), words.end());

        // Step 3: Join with single space
        string result = "";
        for (int i = 0; i < words.size(); ++i) {
            result += words[i];
            if (i != words.size() - 1)
                result += " ";
        }

        return result;
    }
};