//remove all duplicates in-place so that each unique element appears only once.
// Return the number of unique elements in the array.
#include <iostream>
#include <map>
using namespace std;

// broute force
int removeDuplicates(int *arr,int size){
	map<int, int> unique;
	for(int i=0; i<size; i++){
		unique.insert({arr[i], i});
	}
	int k = unique.size();
    int i = 0;
	for(auto element : unique){
		arr[i] = element.first;
        i++;
        }
        return k;
}

//optimal solution
int removeDuplicates1(int* arr, int size) {
    if (size == 0) return 0;

    int i = 0;  // Points to the last unique element
    for (int j = 1; j < size; j++) {
        if (arr[j] != arr[i]) {
            i++;              
            arr[i] = arr[j];  
        }
    }

    return i + 1;  // Number of unique elements
}
int main(){
	int arr[7] = {1,1,2,2,3,4,4};
	
//	int output = removeDuplicates(arr, 7);
//    cout<<"Unique elements are: "<<output<<endl;
//    for(int i=0; i<output; i++){
//    cout<<arr[i]<<endl;
//    } 
    
// optimal output
    int k = removeDuplicates1(arr, 7);

    cout << "Number of unique elements: " << k << endl;
    cout << "Modified array: ";
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
	return 0;
}
