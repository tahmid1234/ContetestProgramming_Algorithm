#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,d,m,x,y;
    cin>>n>>d;
    cin>>m;
    while(m--){
        cin>>x>>y;
        if((d<=x+y && x+y<=2*n-d) and (-d<=x-y and x-y<=d)){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;


    }

}