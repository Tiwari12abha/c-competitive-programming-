/*#include<iostream>
using namespace std;
int main(){
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<b<<c<<d<<e;
}*/
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b,i;
    cin>>a>>b;
    for(i=a;i<=b;i++){
        switch(i)
        {
        case 1:cout<<"one";
            break;
        case 2:cout<<"two";
            break;
        case 3:cout<<"three";
            break;
        case 4:cout<<"four";
            break;
        case 5:cout<<"five";
            break;
        case 6:cout<<"six";
            break;
        case 7:cout<<"seven";
            break;
        case 8:cout<<"eight";
            break;
        case 9:cout<<"nine";
            break;
        default:if(i%2) cout<<"odd";
            else cout<<"even";
            break;
        }
        cout<<endl;
    }
    return 0;
}