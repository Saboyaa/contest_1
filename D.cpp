#include <bits/stdc++.h>


using namespace std;

int main(){
    int a,b,e=0,k;
    cin>>a;
    int c[a],g[a],h[a];
    vector<int> vect;
    for(int i =0;i<a;i++){
        g[i]=i+1;
        h[i]=0;
    }
    for(int i = 0;i<a;i++){
        int d;
        cin>>d;
        c[i]=d;
        if(d!=0){g[d-1]=0;}
        else{h[i] = i;}
    };
    for(int i = 0;i<a;i++){
        if(g[i]!=0){vect.push_back(g[i]);}
    }
    for(int i = 0;i<a;i++){
        if(c[i]==0&&i+1!=vect.back()){c[i]=vect.back();vect.pop_back();k = i;}
        else if(c[i]==0){c[i]=vect.front();vect.erase(vect.begin());}
    }
    for(int i = 0;i<a;i++){
        if(c[i]==i+1){int z = c[i];c[i]= c[k];c[k]=z;}
    }
    for(int i = 0;i<a;i++){
        cout<<c[i]<<" ";
    };
    
} 