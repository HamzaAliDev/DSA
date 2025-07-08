// return GCD of two positive integer greatest common factor
#include <iostream>
using namespace std;
int GCD(int x, int y){
	int gcd = 1;

	for(int i=1; i<=min(x,y); i++){
		if(x%i == 0 && y%i == 0 ){
			gcd = i;
		}
	}
	return gcd;
}
int main(){
	int num1, num2;
	cout<<"Enter two integers: ";
	cin>>num1;
	cin>>num2;
	
	cout<<"The GCD is: "<<GCD(num1, num2);
	
	return 0;
}
