// return true if number is prime
#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int x){
	int count = 0;
	for(int i=1; i<=x; i++){
		if(x%i == 0){
			count++;
		}
	}
	
	if(count == 2){
		return true;
	}else{
		return false;
	}
}

//optimal solution
bool checkPrime(int x){
	int count = 0;
	for(int i=1; i<=sqrt(x); i++){
		if(x%i == 0){
			count++;
			if(x/i != i){
				count++;
			}
		}
	}
	if(count == 2){
		return true;
	}else{
		return false;
	}
}

int main(){
	int num;
	cout<<"Enter a Number: ";
	cin>>num;
	
//	cout<<isPrime(num);
	cout<<checkPrime(num);
	
	return 0;
}
