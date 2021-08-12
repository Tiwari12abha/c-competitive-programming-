//Reverse me (problem code -REVMEE)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,N;
    vector<int>v;
    cin>>n;
    while(n--){
        cin>>N;
        v.emplace_back(N);
    }
    
    for(auto it=v.rbegin();it!=v.rend();it++) cout<<(*it)<<" ";
    return 0;
    
}