// sum first N numbers
#include <iostream>
using namespace std;

//parameterized method
void sumNumber(int n, int sum){
	if(n < 1){
		cout<<sum<<endl;
		return;
	}
	sumNumber(n-1, sum + n);
}

// functional method
int sumNumber2(int n){
	if(n == 0){
		return 0;
	}
	
	return n + sumNumber2(n-1);
}
int main(){
	int n;
	cout<<"Enter an integer: ";
	cin>>n;
	
	sumNumber(n,0);
	int result = sumNumber2(n);
	cout<<"Result is :"<<result;
	return 0;
}
