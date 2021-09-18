#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s,maxChar="";
    int maxVal=0;
    unordered_map <string,int> letters;
    cin>>n;
    cin>>s;
    letters.insert(pair<string,int>("as",1));

     for(int i =0 ;i+1<s.size();i++){
         
        //if(abs(s[i]-s[i+1])<=1 or (s[i]=='A' and s[i+1]=='Z') or (s[i]=='Z' and s[i+1]=='A')){
            string key = "";
            key = key + s[i]+s[i+1];
            //int value = letters[key]++;
            letters.insert(pair<string,int>(key,letters[key]++));
            
            if(maxVal<letters[key])
            { 
                
                maxChar = key;
                maxVal = letters[key];
            }
       // }
    }
   
    cout<<maxChar<<endl;

}