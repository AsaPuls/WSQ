#include <iostream> //Asa Puls A01671619
#include <cmath>
#include <string>
using namespace std;

void palindrome (string num){
	string revnum;
	revnum = string(num.rbegin(), num.rend());
	if (num == revnum){
	cout << num << "Is a palindrome" << endl;
	}
	else {
	cout << num << "Is not a palindrome" << endl;
	}
}

int main (){
  string num;
	cout << "Give me a number: ";
	cin >> num;
	return 0;
}
