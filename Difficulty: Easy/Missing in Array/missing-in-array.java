class Solution {
    int missingNum(int arr[]) {
        // code here
        int n = arr.length;

        // Correct expected sum from 1 to n+1
        long expectedSum = (long)(n + 1) * (n + 2) / 2;

        long actualSum = 0;
        for (int i = 0; i < n; i++) {
            actualSum += arr[i];
        }

        long missing = expectedSum - actualSum;

        return (int) missing;
    }
}