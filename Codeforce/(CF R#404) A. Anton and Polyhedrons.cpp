#include <stdio.h>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(){
    int n ,count=0;
    string name;

    unordered_map<string,int> polyhedrons;
    polyhedrons["Tetrahedron"] = 4;
    polyhedrons["Cube"] = 6;
    polyhedrons["Octahedron"] = 8;
    polyhedrons["Dodecahedron"] = 12;
    polyhedrons["Icosahedron"] = 20;

    cin>>n;
    while(n--){
        cin>>name;
        count += polyhedrons[name];

    }
    cout<<count<<endl;

    
}