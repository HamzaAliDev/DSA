// return reverse number of input
#include <iostream>
using namespace std;
int reverseNumber(int n){
	int number = 0;
	
	while(n > 0){
		int lastDigit = n % 10;
		number = (number * 10) + lastDigit;
		
		n = n/10;
	}
	return number;
}

int main(){
	int value;
	cout<<"Enter a value"<<endl;
	cin>>value;
	
	int result = reverseNumber(value);
	cout<<"Reverse Order is "<<result;
}
