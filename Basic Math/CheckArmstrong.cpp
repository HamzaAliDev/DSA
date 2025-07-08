// return true if number is Armstrong number(sum of digits raised to the power of digits)
#include <iostream>
#include <cmath>
using namespace std;
int countDigit(int n){
    int count = 0;

    while(n > 0){
        count++;
        n = n / 10;
    }
    return count;
}
bool isArmstrong(int n, int digits){
	int number = n;
	int sum = 0;
	while(n > 0){
		int lastDigit = n % 10;
		sum = sum + pow(lastDigit, digits);
		
		n = n/10;
	}
	if(number == sum) return true;
	else return false;
	
}
int main (){
    int value;
    cout<<"Enter a value of Integer: "<<endl;
    cin>>value;

    int digits = countDigit(value);
    bool result = isArmstrong(value, digits);
    cout<<"Armstrong "<<result;
    return 0;
} 
