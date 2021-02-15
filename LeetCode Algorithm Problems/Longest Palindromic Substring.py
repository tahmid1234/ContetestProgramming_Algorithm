class Solution:
    def longestPalindrome(self, s: str) -> str:
        if(len(s)==1):
            return s
        strat=0
        end=0
        total=0
        
        for i in range (len(s)):
            l1=self.expandAtTheCenter(s,i,i)
            l2=self.expandAtTheCenter(s,i,i+1)
            l=max(l1,l2)
           
            if(total<l):
                total=l
                start=i-((l-1)//2)
                end= i+(l//2)
        
        return s[start:end+1]
            
            
            
        
        
            
    
    
    
    
    def expandAtTheCenter(self,s,l,r):
        if(l>r):
            return 0
        
        while(l>=0 and r<len(s) and s[l]==s[r]):
            l=l-1
            r=r+1
        
        
        return r-l-1
        