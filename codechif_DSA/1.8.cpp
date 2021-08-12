//Find me
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    long long N,K,n,c=0;
    cin>>N>>K;
    while(N--){
        cin>>n;
        v.emplace_back(n);
        if(n==K){
            c++;
        }
        else continue;
    }
    if(c>0) cout<<1;
    else cout<<-1; 
    
    
    return 0;
}