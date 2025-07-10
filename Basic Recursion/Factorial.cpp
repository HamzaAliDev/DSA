// factorial of N;
#include <iostream>
using namespace std;

// functional method
int fact(int n){
	if(n == 0){
		return 1;
	}
	return n * fact(n-1);
}

// parameterized method
void fact2(int i, int mul){
	if(i < 1){
		cout<<mul<<endl;
		return;
	}
	fact2(i-1, mul * i);
}
int main(){
	int n;
	cout<<"Enter an integer: ";
	cin>>n;
	
	fact2(n, 1);
	cout<<"functional method: "<<fact(n);
}
