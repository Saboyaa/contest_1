#include <bits/stdc++.h>


using namespace std;

int main(){
    int a,e = 0;
    cin>>a;
    vector<int> c;
    for(int i = 0;i<a;i++){
        int d;
        cin>>d; 
        c.push_back(d);
    };
    for(int i = 0;i<a;i++){
        set<int> d;
        for(int j = a;j>=i;j--){
        d.insert(c[j]);
        if(d.size()==a-j && d.size()>e){e = d.size()-1;}
        cout<<"size "<<d.size()<< " a-j "<< a-j;
        }
    };
    
} 