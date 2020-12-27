def timeConversion(s):
    h=int(s[:2])
    h=h%12
    if(s[8]=='A'):
        if(h<11):
            
            return '0'+str(h)+s[2:8]
        else:
            return str(h)+s[2:8]
            
    
    return str(h+12)+s[2:8]
    
  
        
        
         
    #
    # Write your code here.
    #

if __name__ == '__main__':
    

    s = input()

    result = timeConversion(s)

    print(result)