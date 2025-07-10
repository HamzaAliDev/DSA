// print N times name and show 0 to 5 values
#include <iostream>
using namespace std;
int count = 1;
void print(int i, int j){
	if(i > j) return;
	cout<<"Jones"<<endl;
	print(i+1, j);
}

void show(){
	if(count == 6) return;
	cout<<count<<endl;
	count++;
	show();
	
}

int main(){
	int n;
	cout<<"Enter an integer: ";
	cin>>n;
	
	show();
	print(1,n);
	return 0;	
} 
