// return all divisor of n in a sorted list
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
// simple logic
vector<int> getDivisors(int n){
	vector<int> divisors;
	
	for(int i=1; i<=n; i++){
		if(n % i == 0){
			divisors.push_back(i);
		}
	}
	return divisors;
}

//optimal solution
vector<int> optimal(int n){
	vector<int> divisors;
	
	for(int i=1; i<sqrt(n); i++){
		if(n % i == 0){
			divisors.push_back(i);
			
			if(i != n/i){
				divisors.push_back(n/i);
			}
		}
	}
	
	sort(divisors.begin(), divisors.end());
	return divisors;
} 
int main(){
	int value;
	cout<<"Enter a value ";
	cin>>value;
	
//	vector<int> divisors = getDivisors(value);
	vector<int> divisors = optimal(value);
	cout<<"Divisors are"<<endl;
	for (int i = 0; i < divisors.size(); i++) {
    	cout << divisors[i] << endl;
	}
	return 0;
}
