//hacker rank solution of DEQUE-STL
#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    deque<int>d(k);
    int i;
    for (i=0;i<k;i++){
        while((!d.empty())&&(arr[i]>=arr[d.back()]))
            d.pop_back();
        d.push_back(i);
    }
    for(;i<n;i++){
        cout<<arr[d.front()]<<" ";
        while((!d.empty())&&(d.front()<=i-k))
             d.pop_front();
        while((!d.empty())&&(arr[i]>=arr[d.back()]))
             d.pop_back();
        d.push_back(i);
    }
    cout<<arr[d.front()]<<endl;
}

int main(){

	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
/* output
2
5 2 
4 6 6 4
7 5
3 4 5 8 1 4 10
8 8 10
*/