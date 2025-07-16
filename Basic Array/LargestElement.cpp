//  return the value of the largest element in the array
#include <iostream>
#include <algorithm>
using namespace std;

//broute force
int large(int *arr, int size){
	sort(arr, arr + size);
	return arr[size-1];
}

//optimal 
int largest(int *arr, int size){
	int max = arr[0];
	 for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main(){
	int arr[7] = {2,4,6,8,12,16,7};
	
	int result = large(arr,7);
	int output = largest(arr,7);
	
	cout<<"largest element by broute force: "<<result<<endl;
	cout<<"largest element by optimal: "<<output;
	return 0;
}
