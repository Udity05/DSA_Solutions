class Solution {
    // Function to sort the array using bubble sort algorithm.
    public static void bubbleSort(int arr[]) {
        // code here
        int n=arr.length;
        int temp;
        boolean swapped;
        for(int i=0;i<n-1;i++){
            swapped = false;
            for(int j=0; j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    swapped = true;
                }
            }
            if(swapped == false)
            break;
        }
    }
}