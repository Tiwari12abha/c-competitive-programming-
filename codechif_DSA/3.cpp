#include <bits/stdc++.h>
using namespace std;
#define int            long long int
#define endl           "\n"
#define all(v)         v.begin(), v.end()
#define Mod            1e9 + 7

void testcase(){
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        int count=1;
        int y=v[0];
        for(int i=0;i<n;i++){
            if(v[i]==v[i+1]) {
                count++;
            }
            else break;
        }
        bool flag=true;
        for(int i=count;i<n;i++){
            if(v[i]%(v[i]-y)!=y){
                flag =false;
                break;
            }
        }
        if(flag) cout<<n-count<<endl;
        else cout<<n<<endl;
    }
}
    
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    testcase();
    return 0;
}