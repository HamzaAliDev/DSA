// hashing basic example
#include <iostream>
using namespace std;
int main(){
	int arr[8] = {2,4,2,6,8,1,4,1};
	int hash[9] = {0};
	
	for(int i=0; i<8; i++){
		hash[arr[i]] += 1;
	}
	
	for(int i=0; i<9; i++){
		cout<<hash[i];
	}
}
