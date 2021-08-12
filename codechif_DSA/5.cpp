// hackerrank solution of 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,x,b,y;
    vector<int>v;
    cin>>n;
    while(n--){
       cin>>x;
       v.emplace_back(x);  
    }
    cin>>y;
    v.erase(v.begin()+(y-1));
    cin>>a>>b;
    v.erase(v.begin()+(a-1),v.begin()+(b-1));
    cout<<v.size()<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }

}