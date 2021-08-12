#include<iostream>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    char tem=a[0];
    a[0]=b[0];
    b[0]=tem;
    cout<<a<<" "<<b;

    return 0;
}