#include <bits/stdc++.h>


using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int c[a];
    for(int i = 0;i<a;i++){
        int d;
        cin>>d; 
        c[d] = i;
    };
    for(int i = 0;i<a;i++){
        cout<<c[i];
    };
    
} 