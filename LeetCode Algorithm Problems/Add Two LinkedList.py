
class ListNode:
     def __init__(self, val=0, next=None):
         self.val = val
         self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        a=0
        mul=1
   
        while(l1!=None):
            a=a+l1.val*mul
            mul=mul*10
            l1=l1.next
        b=0
        mul=1
        
        while(l2!=None):
            b=b+l2.val*mul
            mul=mul*10
            l2=l2.next
        aSum=a+b
        sumStr=str(aSum)
        prev=ListNode(int(sumStr[0]))
        
        for i in range(1,len(sumStr)):
            new=ListNode(int(sumStr[i]),prev)
            prev=new
            
        return prev
        