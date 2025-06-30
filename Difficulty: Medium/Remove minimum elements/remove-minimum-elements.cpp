// User function template for C++
class Solution {
  public:
    // Function to find the minimum number of elements to be removed.
    int minRemoval(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int ans = n;
        int i = 0;

        for (int j = 0; j < n; j++) {
            while (arr[j] > 2 * arr[i]) {
                i++;
            }
            int len = j - i + 1;
            ans = min(ans, n - len);
        }

        return ans;
    }
};