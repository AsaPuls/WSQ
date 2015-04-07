#include <iostream>
using namespace std;

int Fact(int num){
  int factorial=0;
  if (num==0){
    factorial = 1;
  }
  else{
    factorial = num * Fact(num-1);
  }
  return factorial;
}
int main(){
  int num;
  cout << "Give me a number: ";
  cin >> num;
  cout << "The factorial of " << num << " is: " << Fact(num) << endl;
  return 0;
}
