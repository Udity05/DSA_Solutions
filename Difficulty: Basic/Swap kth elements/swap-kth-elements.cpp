
class Solution {
  public:
    void swapKth(vector<int> &arr, int k) {
        // code here
        int n = arr.size();

        int frontIndex = k - 1;     // k-th from beginning (1-based to 0-based)
        int endIndex = n - k;       // k-th from end

        if (frontIndex >= 0 && endIndex >= 0 && frontIndex < n && endIndex < n) {
            swap(arr[frontIndex], arr[endIndex]);
        }
    }
};
