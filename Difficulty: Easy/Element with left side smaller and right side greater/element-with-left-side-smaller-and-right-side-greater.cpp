class Solution {
  public:
    int findElement(vector<int> &arr) {
        int n = arr.size();
        vector<int> leftMax(n), rightMin(n);

        leftMax[0] = INT_MIN;
        for (int i = 1; i < n; i++) {
            leftMax[i] = max(leftMax[i - 1], arr[i - 1]);
        }

        rightMin[n - 1] = INT_MAX;
        for (int i = n - 2; i >= 0; i--) {
            rightMin[i] = min(rightMin[i + 1], arr[i + 1]);
        }

        for (int i = 1; i < n - 1; i++) {
            if (arr[i] > leftMax[i] && arr[i] < rightMin[i]) {
                return arr[i];
            }
        }

        return -1;
    }
};
