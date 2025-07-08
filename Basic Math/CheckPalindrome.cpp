// return true if number is Palindrome (same is reverse)
#include <iostream>
using namespace std;
bool isPalindrome(int n){
	int number = n;
	int reverseNumber = 0;
	
	while(n > 0){
		int lastDigit = n % 10;
		reverseNumber = (reverseNumber * 10) + lastDigit;
		
		n = n/10;
	}
	if(reverseNumber == number) return true;
	else return false;
	
}

int main(){
	int value;
	cout<<"Enter a value"<<endl;
	cin>>value;
	
	bool result = isPalindrome(value);
	cout<<"Palindrome "<<result;
	
	return 0;
}
