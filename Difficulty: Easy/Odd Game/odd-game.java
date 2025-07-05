

class Solution {
    static Long oddGame(Long N) {
        // code here
        Long result =1L;
        while(result*2 <= N){
            result*=2;
        }
        return result;
    }
};