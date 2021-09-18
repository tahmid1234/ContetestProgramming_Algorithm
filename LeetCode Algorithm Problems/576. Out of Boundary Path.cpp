/*
        alternative
#include <unordered_map>
class Solution {
    unordered_map<int,unordered_map<int,unordered_map<int,string>>> memory;
    //unordered_map<double,unsigned long long int> memory;
    //int memory[51][51][51] ;
    //int count [51][51][51];
    
    int mod =1000000007;
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
       
       
        
        return dfs(m,n,maxMove,startRow,startColumn);
        
        
    }
public:
    int dfs(int m, int n, int maxMove, int startRow, int startColumn){
         if(startRow>=m or startRow<0 or startColumn >=n or startColumn<0)
            return 1;
        if(maxMove<=0)
            return 0;
         if(memory[maxMove][startRow][startColumn]!= "")
         
             return stoi(memory[maxMove][startRow][startColumn]);
           
            // cout<<" =  "<<" int "<< a<<endl;
             
            
       
        int a = findPaths(m,n,maxMove-1,startRow-1,startColumn);
        int b = findPaths(m,n,maxMove-1,startRow+1,startColumn);
        int  c = findPaths(m,n,maxMove-1,startRow,startColumn-1);
        int  d = findPaths(m,n,maxMove-1,startRow,startColumn+1);
        
      
       
        
        memory[maxMove][startRow][startColumn]= to_string(((a+b)%mod+(c+d)%mod)%mod);
        //count [maxMove][startRow][startColumn] = -1;
        
        return stoi(memory[maxMove][startRow][startColumn]);
    }
};
*/

#include <unordered_map>
class Solution {
    //unordered_map<int,unordered_map<int,unordered_map<int,string>>> memory;
    //unordered_map<double,unsigned long long int> memory;
    int memory[51][51][51] ;
    int count [51][51][51];
    
    int mod =1000000007;
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
       
       
        
        return dfs(m,n,maxMove,startRow,startColumn);
        
        
    }
public:
    int dfs(int m, int n, int maxMove, int startRow, int startColumn){
         if(startRow>=m or startRow<0 or startColumn >=n or startColumn<0)
            return 1;
        if(maxMove<=0)
            return 0;
         if(count[maxMove][startRow][startColumn]== -1)
         
             return memory[maxMove][startRow][startColumn]%mod;
           
            // cout<<" =  "<<" int "<< a<<endl;
             
            
       
        int a = findPaths(m,n,maxMove-1,startRow-1,startColumn);
        int b = findPaths(m,n,maxMove-1,startRow+1,startColumn);
        int  c = findPaths(m,n,maxMove-1,startRow,startColumn-1);
        int  d = findPaths(m,n,maxMove-1,startRow,startColumn+1);
        
      
       
        
        memory[maxMove][startRow][startColumn]= ((a+b)%mod+(c+d)%mod)%mod;
        count [maxMove][startRow][startColumn] = -1;
        
        return memory[maxMove][startRow][startColumn];
    }
};