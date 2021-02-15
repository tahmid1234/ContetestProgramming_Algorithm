class Solution:
    
    
    def f(self) :
        
        print("kaak")
    
    def mergeSort():
        print("Ok")
    
    
   
    
    def findMedianSortedArrays(self, num1, num2):
        l1=len(num1)
        l2=len(num2)
        
        if(l1==0):
            return findMedian(num2,l2)
        if(l2==0):
            return findMedian(num1,l1)
        if(num1[0]>=num2[l2-1] ):
            num2=num2+num1
            return findMedian(num2,l1+l2)
        if(num2[0]>=num1[l1-1]):
            num1=num1+num2
            return findMedian (num1,l1+l2)
        a=num1+num2
        self.f()
        
        return findMedian(a,l1+l2)
        
        
    
   
    
    
    def findMedian(self,array,length):
        
        if(length%2):
            index=(length-1)//2
            return array[index],
        else:
            index=(length-1)//2
            
            return (array[index]+arry[index+1])/2
        
        
    def merge(self,arr, l, m, r): 
        n1 = m - l + 1
        n2 = r- m 

        # create temp arrays 
        L = [0] * (n1) 
        R = [0] * (n2) 

        # Copy data to temp arrays L[] and R[] 
        for i in range(0 , n1): 
            L[i] = arr[l + i] 

        for j in range(0 , n2): 
            R[j] = arr[m + 1 + j] 

        # Merge the temp arrays back into arr[l..r] 
        i = 0     # Initial index of first subarray 
        j = 0     # Initial index of second subarray 
        k = l     # Initial index of merged subarray 

        while i < n1 and j < n2 : 
            if L[i] <= R[j]: 
                arr[k] = L[i] 
                i += 1
            else: 
                arr[k] = R[j] 
                j += 1
            k += 1

        # Copy the remaining elements of L[], if there 
        # are any 
        while i < n1: 
            arr[k] = L[i] 
            i += 1
            k += 1

        # Copy the remaining elements of R[], if there 
        # are any 
        while j < n2: 
            arr[k] = R[j] 
            j += 1
            k += 1
  
    

s=Solution()

s.findMedianSortedArrays([1,2,3],[2,3])
