// User function Template for Java

class Solution {
    public int binaryToDecimal(String b) {
        // Code here
        int result = 0;
        int power = 0;

        // Traverse from right to left (LSB to MSB)
        for (int i = b.length() - 1; i >= 0; i--) {
            char bit = b.charAt(i);
            if (bit == '1') {
                result += Math.pow(2, power);
            }
            power++;
        }

        return result;
    }
}