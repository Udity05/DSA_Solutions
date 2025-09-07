class Solution:
    def insertionSort(self, arr):
        # code here
        n = len(arr)
        
        for i in range(1,n):
            self = arr[i]
            j=i-1
            
            while j>=0 and arr[j]>self:
                arr[j+1]=arr[j]
                j -= 1
            arr[j+1]=self
        return arr