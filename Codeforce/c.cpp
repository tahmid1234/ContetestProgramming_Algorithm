#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n,m ,a,b,nx=-1,ni=1000000001,mx=-1,mi=1000000001,result;
    cin>>n;
    while(n--){
        cin>>a>>b;
        nx = max(a,nx);
        ni = min(b,ni);

    }
    cin>>m;
    while(m--){
        cin>>a>>b;
        mx = max(a,mx);
        mi = min(b,mi);
    }
    result = max((mx-ni),(nx-mi));
    int x = 2e9/2;
    result = result>0?result:0;
    cout<<result<<x<<endl;
}