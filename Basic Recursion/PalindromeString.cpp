// check string is palindrome or not
#include <iostream>
using namespace std;
string txt = "MADAM";
int n = txt.length();

bool fun(int i){
	if(i >= n/2){
		return true;
	}
	if(txt[i] != txt[n-i-1]){
		return false;
	}
	fun(i+1);
}

int main(){
	
	bool result = fun(0);
	cout<<result;
	
	return 0;
}
