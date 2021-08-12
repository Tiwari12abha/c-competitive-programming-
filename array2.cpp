#include<iostream>
using namespace std;
int main(){
    int **A,i,j;
    A=new int*[3];
    A[0]=new int[4];
    A[1]=new int[4];
    A[2]=new int[4];
    for (i=0;i<3;i++){
        for(j=0;j<4;j++){
            cin>>A[i][j];
        }
    }
    cout<<"areey"<<A[1][1];
    free(A);
    return 0;

}