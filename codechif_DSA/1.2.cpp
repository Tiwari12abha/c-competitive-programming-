//Is Both or not (problem code -ISBOTH)
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    if(N%5 && N%11){
        cout<<"NONE";
    }
    else if(N%5 || N%11)
    {
       cout<<"ONE"; 
    }
    else{
        cout<<"BOTH";
    }
    
    return 0;
}