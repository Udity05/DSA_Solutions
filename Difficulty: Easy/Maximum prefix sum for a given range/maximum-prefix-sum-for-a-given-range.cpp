class Solution {
  public:
    vector<int> maxPrefixes(vector<int>& arr, vector<int>& leftIndex,
                            vector<int>& rightIndex) {
        // code here.
         int q = leftIndex.size();  // Number of queries
    vector<int> result;

    for (int i = 0; i < q; i++) {
        int l = leftIndex[i];
        int r = rightIndex[i];

        int prefixSum = 0;
        int maxPrefix = INT_MIN;

        for (int j = l; j <= r; j++) {
            prefixSum += arr[j];
            maxPrefix = max(maxPrefix, prefixSum);
        }

        result.push_back(maxPrefix);
    }

    return result;
    }
};