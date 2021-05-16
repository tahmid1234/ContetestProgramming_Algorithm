/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <bits/stdc++.h>
using namespace std;

int main()
{  
     int n=0,q=0;
    cin>>n;
     int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    
    cin>>q;
     int b[q];
    for(int i=0;i<q;i++){
        cin>>b[i];
    }
    
    
    for(int i=0;i<q;i++){
         int ans = upper_bound(a,a+n, b[i])-a;
       cout<<ans<<endl;
        }
        //cout<<dp[i]<<" i "<<i<<" b "<<b[i]<<endl;
        
    
    
    

    return 0;
}
