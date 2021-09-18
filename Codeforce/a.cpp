#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n =3;
    int a[n],output[n];
    int min_i,max_i,mid_i;
    for(int i = 0 ; i<n; i++){
        cin>>a[i];
    }

    if(a[0]+a[1]<a[2] or a[1]+a[2]<a[0] or a[2]+a[0]<a[1]){
        cout<<"Impossible"<<endl;
    }
    if(a[0]>=a[1] and a[0]>=a[2] ){
        max_i = 0;
    }
    else if(a[1]>=a[0] and a[1]>=a[2] ){
        max_i = 1;
    }
    else{
        max_i = 2;
    }

     if(a[0]<=a[1] and a[0]<=a[2] ){
        min_i = 0;
    }
    else if(a[1]<=a[0] and a[1]<=a[2] ){
        min_i = 1;
    }
    else{
        min_i = 2;
    }
    //(CF R #200 D#2) B. Simple Molecules.cpp
    
    mid_i = n- max_i-min_i;
    cout<<max_i<<" "<<mid_i<<" "<<min_i<<endl;
    output[2] = a[max_i] - a[mid_i];
    output[0] = a[min_i] - output[2];
    output[1] = a[max_i] - output[2];

    for(int i =0 ; i<n ; i++){
        cout<<output[i]<<" ";
    } 
    cout<<""<<endl;

}