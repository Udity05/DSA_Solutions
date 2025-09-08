class Solution:
    def findUnion(self, a, b):
        # code here 
        i,j=0,0
        result=[]
        last_added=None
        
        while i<len(a) and j<len(b):
            if a[i]<b[j]:
                if a[i]!= last_added:
                    result.append(a[i])
                    last_added = a[i]
                i +=1
            elif b[j]<a[i]:
                if b[j]!= last_added:
                    result.append(b[j])
                    last_added = b[j]
                j +=1
            else:
                if a[i]!= last_added:
                    result.append(a[i])
                    last_added = a[i]
                i+=1
                j+=1
        while i<len(a):
            if a[i] != last_added:
                result.append(a[i])
                last_added=a[i]
            i +=1
        while j<len(b):
            if b[j] != last_added:
                result.append(b[j])
                last_added=b[j]
            j+=1
        return result