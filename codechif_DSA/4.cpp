#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n;
    vector<int>v;
    while(n--){
        cin>>q;
        v.emplace_back(q);
    }
    sort(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<" ";
    }
}