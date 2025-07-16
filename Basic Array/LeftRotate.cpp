// rotate the array to the left by one.
#include <iostream>
using namespace std;

// rotate array by n times
void rotateArray(){
	int size;
	cout<<"enter size of array: ";
	cin>>size;
	
	int brr[size];
	cout<<endl<<"Enter values :";
	for(int l=0; l<size; l++){
		cin>>brr[l];
	}
		
	int n;
	cout<<"Enter no. of steps to rotate: ";
	cin>>n;
	
	while(n > 0){
		int temp = brr[0];
	
		for(int i=0; i<size; i++){
			brr[i] = brr[i + 1];
		}
		brr[size-1] = temp;
		n--;
	}
	
	
	for(int j=0; j<size; j++){
		cout<<brr[j]<<endl;
	}
}

//optimal solution
void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotateOptimal() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    
    int arr[size];
    cout << "Enter values: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int d;
    cout << "Enter number of steps to rotate: ";
    cin >> d;

    d = d % size;  // Normalize d

    reverse(arr, 0, d - 1);         // reverse first 2
    reverse(arr, d, size - 1);     // reverse rest of array
    reverse(arr, 0, size - 1);     // reverse full array

    // Output rotated array
    cout << "Rotated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
	int arr[5] = {1,2,3,4,5};
	
	//rotate by 1 step
	int temp = arr[0];
	for(int i=0; i<5; i++){
		arr[i] = arr[i+1];
	}
	arr[5] = temp;
	
	for(int j=0; j<5; j++){
		cout<<arr[j]<<endl;
	}
	
	//rotateArray();
	rotateOptimal();
	
	return 0;
}
