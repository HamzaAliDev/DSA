// reverse an array
#include <iostream>
using namespace std;
int arr[9] = {0,1,2,3,4,5,6,7,8};
int n = sizeof(arr) / sizeof(arr[0]);

void func(int l, int r){	
	if( l >= r){
		return;
	}
	swap(arr[l], arr[r]);
	func(l+1, r-1);
}

// optimize
void func2(int i){
	if(i >= n/2) return;
	swap(arr[i], arr[n-i-1]);
	
	func2(i+1);
}
int main(){
//	func(0, n-1);
	func2(0);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" , ";
	}
	
	return 0;
} 
