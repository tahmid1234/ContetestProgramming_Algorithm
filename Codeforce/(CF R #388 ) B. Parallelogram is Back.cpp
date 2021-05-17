#include <bits/stdc++.h>
using namespace std;

int main()
{  
    int points[6] ;
    for(int i=0;i<6;i++){
        cin>>points[i];
    }
        //cout<<points[0]<<" i  b "<<points[5]<<endl;
    cout<<3<<endl;
    cout<<points[0]-points[2]+points[4]<<" "<<points[1]-points[3]+points[5]<<endl;
    cout<<points[0]-points[4]+points[2]<<" "<<points[1]-points[5]+points[3]<<endl;
    cout<<points[2]-points[0]+points[4]<<" "<<points[3]-points[1]+points[5]<<endl;
        
    
    
    

    return 0;
}