class Solution {
    static int countFactors(int n) {
        // code here
        int count =0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0)
                count++;
        }
        return count;
    }
}