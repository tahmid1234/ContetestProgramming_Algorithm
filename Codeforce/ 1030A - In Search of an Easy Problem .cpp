#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,status=0;
    
    cin>>n;
    while(n--){

        cin>>a;
        status += a;
    }
    if(status)
    cout<<"HARD"<<endl;
    else
    cout<<"EASY"<<endl;

}