#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,d;
    cin>>n>>d;
    while (d)
    {
        int mod = n%10;
        if(mod==0){
            n=n/10;
            d--;
        }
        else if(d>mod){
            n = n- mod;
            d=d-mod;
        }
        else{
            n = n - d;
            d = 0;
        }

    }

    cout<<n << endl;
    

}