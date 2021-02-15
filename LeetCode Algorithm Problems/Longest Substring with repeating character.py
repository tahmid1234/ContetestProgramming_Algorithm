class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        dict={}
        count=0
        j=0
        starting=0
        i=0
        while(i<len(s)):
            if(s[i]not in dict):
                dict[s[i]]=i
            
                j=j+1
            else: 
                count=max(count,j)
            
                if(dict[s[i]]>=starting):
                    
                    j=j-dict[s[i]]+starting
                    starting=dict[s[i]]+1
                else:
                    j=j+1
                
              
                dict[s[i]]=i
            i=i+1
               
                
           
                
        count=max(count,j)
        return count
           
            

            
            
            
        