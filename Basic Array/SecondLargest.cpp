//return the second-largest element in the array. If the second-largest element does not exist, return -1.
#include <iostream>
#include <algorithm>
using namespace std;

//broute force 
int secondLargest(int *arr,int size){
	sort(arr, arr + size);

	for(int i=1; i<size; i++){	
		if(arr[size-1] != arr[size-1-i])
			return arr[size-1-i];
	}
	return -1;
}

// optimal solution
int secondLargest1(int *arr,int size){
	int largest = arr[0];
	int larger = -1;
	for(int i=1; i<size; i++){
		if(largest < arr[i]){
			larger = largest;
			largest = arr[i];
		}
	}
	return larger;
}
int main(){
	int arr[7] = {2,4,6,8,12,16,7};
	
	int output1 = secondLargest(arr,7);
	int output2 = secondLargest1(arr,7);
	
	cout<<"2nd largest element by broute force: "<<output1<<endl;
	cout<<"2nd largest element by optimal solution: "<<output2;
	return 0;
}
