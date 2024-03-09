#include <bits/stdc++.h>


using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int c[a];
    for(int i = 0;i<a;i++){
        cin>>c[i]; 
    };
    for(int i = 0; i<a; i++){
        for(int j = i+1; j<a;j++){
            if(c[i]+c[j]== b){cout<<i+1<<" "<<j+1;return  0;}
        }
    }
    cout<<"-1";
    return 0;
} 