class Solution {
  public:
    int minOperations(int arr[], int n, int k) {
        // code here
         priority_queue<int, vector<int>, greater<int>> minHeap;

    // Step 1: Push all elements into minHeap
    for (int i = 0; i < n; ++i) {
        minHeap.push(arr[i]);
    }

    int operations = 0;

    // Step 2: Keep combining two smallest until all are >= k
    while (minHeap.size() >= 2 && minHeap.top() < k) {
        int first = minHeap.top(); minHeap.pop();
        int second = minHeap.top(); minHeap.pop();

        int sum = first + second;
        minHeap.push(sum);
        operations++;
    }

    // Step 3: Check final condition
    if (minHeap.top() < k) {
        return -1;
    }

    return operations;
    }
};