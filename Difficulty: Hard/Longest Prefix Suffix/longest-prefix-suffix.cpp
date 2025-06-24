
// User function template for C++

class Solution {
  public:
    int longestPrefixSuffix(string &s) {
        // Your code goes here
        int n = s.length();
        vector<int> lps(n, 0);  // Initialize LPS array
        int len = 0;            // Length of the previous longest prefix suffix

        for (int i = 1; i < n; ) {
            if (s[i] == s[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];  // Try shorter prefix
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }

        return lps[n - 1];  // Longest prefix which is also suffix
    
    }
};