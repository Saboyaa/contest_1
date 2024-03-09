#include <bits/stdc++.h>


using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,d;
    cin>>a;
    vector<int> c;
    for(int i = 0;i<a;i++){
        int z;
        cin>>z;
        c.push_back(z);
    };
    sort(c.begin(),c.end());
    cin>>b;
    for(int i = 0;i<b;i++){
        cin>>d;
        cout<<(upper_bound(c.begin(),c.end(),d)-c.begin())<<"\n";
    };
    
} 