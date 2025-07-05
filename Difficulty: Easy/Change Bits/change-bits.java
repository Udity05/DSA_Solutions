// User function Template for Java

class Solution {
    static int[] changeBits(int N) {
        // code here
        String binary = Integer.toBinaryString(N);
        
        String newbinary = binary.replace('0','1');
        
        int newNumber = Integer.parseInt(newbinary, 2);
        
        int difference = newNumber - N;
        
        return new int[]{difference, newNumber};
    }
};