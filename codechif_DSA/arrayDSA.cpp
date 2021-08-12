#include<iostream>
using namespace std;
class Array{
    private:
    int *A;
    int size,length;
    public:
    Array(){
        size=10;
        length=0;
        A=new int[size];
        void swap(int *x,int *y);
    }
    Array(int sz){
        size=sz;
        length=0;
        A=new int[size];
    }
    ~Array(){
        delete []A;
    }
    void Display();
    void Append(int x);
    void Insert(int index,int x);
    int LinearSearch(int key);
    int BinarySearch(int key);
    //int RBinarySearch(int a[],int l ,int h,int key);
    int Get(int index);
    void Set(int index,int x);
    int Max();
    int Min();
    float Avg();
    int Sum();
    void Reverse();
    void Reverse2();
    void InsertSort(int x);
    int isSorted();
    void Rearrage();
    Array* Merge(Array *arr2);
    Array* Union(Array *arr2);
    Array* Intersection(Array *arr2);
    Array* Difference(Array *arr2);
};
void Array::Display(){
    int i;
    cout<<"Element are";
    for(i=0;i<length;i++)
       cout<<A[i];
}
void Array::Append(int x){
    if(length<size)
       A[length++]=x;
}
void Array::Insert(int index,int x){
    int i;
    for(i=0;i<length;i++)
       cout<<A[i];
}
