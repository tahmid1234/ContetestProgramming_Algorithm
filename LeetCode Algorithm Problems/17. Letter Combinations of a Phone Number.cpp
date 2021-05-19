class Solution {
public:
    vector<string> dm;
    vector<string> letterCombinations(string digits) {
        
        vector<string> res;
        if(!digits.size()){
            return res;
        }
        dm = {"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string s;
        dfs(digits,s,res,0);
    
        return res;
    }
    
    void dfs(string &digits,string &s,vector<string> &res,int pos){
       
        if(pos==digits.size()){
            res.push_back(s);
            return;
        }
        for(auto ch : dm[digits[pos]-'0']){
            s+=ch;
            dfs(digits,s,res,pos+1);
            cout<<s;
            s.pop_back();
        }
        
        
    }
};