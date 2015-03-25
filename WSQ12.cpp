#include <iostream>
using namespace std;

int GCD(int num1,int num2){
  int gdc;
  for (int i=1; i<=num1; i++){
    if (num1%i == 0 && num2%i == 0)
       gdc = i;
  }
  return gdc;
}
int main(){
  int num1,num2;
  cout << "Give me 2 numbers: " << endl;
  cin >> num1;
  cin >> num2;
  cout << "Greatest Common Denominator = " << GCD(num1,num2) << endl;
  return 0;
}
