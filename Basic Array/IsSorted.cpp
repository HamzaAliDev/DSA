// return true is array is sorted or false
#include <iostream>
using namespace std;

bool isSorted (int *arr,int size){
	for(int i=0; i < size-1; i++){
		if(arr[i] > arr[i + 1]){
			return false;
		}
	}
	return true;
}

int main(){
	int arr[6] = {1,2,3,4,5,6};
	
	cout<<isSorted(arr, 6);
	return 0;
}
