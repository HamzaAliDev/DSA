// return count of  number of digits in number
#include <iostream>
using namespace std;

int countDigit(int n){
    int count = 0;

    while(n > 0){
        count++;
        n = n / 10;
    }
    
    return count;

}
int main (){
    int value;
    cout<<"Enter a value of Integer: "<<endl;
    cin>>value;

    int result = countDigit(value);
    cout<<"Number of Digits is "<<result;
    return 0;
} 
