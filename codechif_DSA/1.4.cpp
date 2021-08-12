//First Second Largest (problem code -SECLAR)
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int A,B,C;
    cin>>A>>B>>C;
    int a[3]={A,B,C};
    sort(a,a+3);
    cout<<a[1];
    return 0;

}
