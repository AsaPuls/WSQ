#include <iostream> //Asa Puls A01617619
using namespace std;

int fibonacci(long num){
	long fib;
	long a = 0;
	long b = 1;
	for (int i=1; i<num; i++){
		fib = a+b;
		a = b;
		b = fib;
	}
	return fib;
}
int main(){
	long num;
	cout << "Give me a positive number: ";
	cin >> num;
	if (num==0)
		cout << "The " << num << "th number of the Fibonacci sequence is: " << fibonacci(num) << endl;
	if (num==1)
		cout << "The " << num << "st number of the Fibonacci sequence is: " << fibonacci(num) << endl;
	if (num==2)
		cout << "The " << num << "nd number of the Fibonacci sequence is: " << fibonacci(num) << endl;
	if (num>2)
		cout << "The " << num << "th number of the Fibonacci sequence is: " << fibonacci(num) << endl;
	else
		cout << "The number must be postitive" << endl;
	return 0;
}
