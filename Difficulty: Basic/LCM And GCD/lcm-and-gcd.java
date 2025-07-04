class Solution {
    public static int[] lcmAndGcd(int a, int b) {
        // code here
        int gcd = findGCD(a, b);
        int lcm = (a * b) / gcd;

        return new int[]{lcm, gcd};
    }
    
    static int findGCD(int a, int b) {
        // Euclidean algorithm
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
}