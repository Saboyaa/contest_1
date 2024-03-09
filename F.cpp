#include <bits/stdc++.h>


using namespace std;

int main(){
    string x;
    cin>>x;
    for(int i = 0;i<x.size()-1;i++){
        if(x[i]==0){x.erase(i);}
    }
    cout<<x;
    
} 