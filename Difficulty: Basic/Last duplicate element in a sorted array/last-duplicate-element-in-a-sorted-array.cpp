class Solution {
  public:
    vector<int> dupLastIndex(vector<int>& arr) {
        // code here
        int n = arr.size();
    if (n < 2) {
        return {-1, -1}; // No duplicates possible
    }
    for (int i = n - 2; i >= 0; --i) {
        if (arr[i] == arr[i + 1]) {
            return {i + 1, arr[i + 1]}; // Return index and value of the last duplicate
        }
    }
    return {-1, -1};
    }
};