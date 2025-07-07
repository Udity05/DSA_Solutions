class Solution {
    // function to print alternate elements of an array
    public ArrayList<Integer> getAlternates(int arr[]) {
        // Code Here
        int n=arr.length;
        ArrayList<Integer> element= new ArrayList<>();
        
        for(int i=0;i<n;i++){
            if(i%2==0)
            element.add(arr[i]);
        }
        
        return element;
    }
}