//  move all the 0's to the end of the array.
#include <iostream>
#include <vector>
using namespace std;

//broute force solution.
void moveZero(){
	int arr[9] = {0,3,1,4,0,5,0,5,0};
	
	vector<int> temp;
	for(int i=0; i<6; i++){
		if(arr[i] != 0){
			temp.push_back(arr[i]);
		}
	}
	
	for(int j=0; j<temp.size(); j++){
		arr[j] = temp[j];
	}
	for(int k=temp.size(); k<9; k++){
		arr[k] = 0;
	}
	
	for(int j=0; j<9; j++){
		cout<<arr[j]<<endl;
	}
}

//better solution by swaping relative order not same
void betterSolution(){
	int arr[9] = {0,3,1,4,0,5,0,5,0};
	int j = 8;
	int i= 0;
	while(i<j){
		if(arr[i] == 0){
			while(j > 0){
				if(arr[j] == 0){
					j--;		
				}else{
					swap(arr[i], arr[j]);
					j--;
					break;
				}
			}
		}
		i++;
	}
	
	for(int j=0; j<9; j++){
		cout<<arr[j]<<endl;
	}
}

// optimal solution relative order remain same
void optimalSolution(){
	int size = 9;
	int arr[size] = {0,3,1,4,0,5,0,5,0};
	
	int i=0;
	int j=1;
	while(i < size){
		if(arr[i] == 0){
			while(j < size){
				if(arr[j] == 0){
					j++;		
				}else{
					swap(arr[i], arr[j]);
					j++;
					break;
				}
			}
		}
		i++;
	}
	
	for(int j=0; j<9; j++){
		cout<<arr[j]<<endl;
	}
	
} 
int main(){

//	moveZero();
	
//	betterSolution();

	optimalSolution();
	
	return 0;
}
