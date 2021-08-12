//Factors Finding (problem code -DIFACTRS)
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int N,i=1,c=0;
   cin>>N;
   while (i<=N)
   {    if(N%i==0){
           c++;
           v.push_back(i);
           i++; 
       }
        else {
            i++;
            continue;
        }        
   }
cout<<c<<endl;
for(int x:v) cout<<x<<" ";
    return 0;
}