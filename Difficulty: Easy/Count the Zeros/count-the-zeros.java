// User function Template for Java

class Solution {
    int countZeroes(int[] arr) {
        // code here
        int n=arr.length;
        int count=0;
        for(int i=n-1;i>=0;i--){
            if(arr[i]==0)
            count++;
            if(arr[i]==1)
            break;
        }
        return count;
    }
}
