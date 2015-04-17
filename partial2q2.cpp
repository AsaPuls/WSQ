#include <iostream> // Asa Puls A0167619
#include <cmath>
using namespace std;
int superpower(long num1, long num2){
	long SP=1;
	for (int i=0; i<num2; i++){
		SP = SP*num1;
	}
	return SP;
}
int main(){
	long num1,num2;
	cout << "Give me 2 numbers" << endl;
	cin >> num1;
	cin >> num2;
	cout << superpower(num1,num2) << endl;
	return 0;
}
