// valid triangle or not
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c;
    double s,area;
    cin>>a>>b>>c;
    s=(a+b+c)/2.0;
    area=(sqrt(s*(s-a)*(s-b)*(s-c)));
    if (area>0) cout<<"YES";
    else cout<<"NO";
    return 0;
}
