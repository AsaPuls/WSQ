#include <iostream>
using namespace std;

long double fact(int divisor,double factorial){
  for (int i=1; i<=divisor; i++) {
    factorial = factorial*i;
  }
  return factorial;
}
long double estim(){
  long double e=1;
  int factorial;
  for (int divisor=1; divisor<15; divisor++){
    e = e + (1/fact(divisor,factorial));
  }
  return e;
}
int main (){
  cout << "The value estimates for e is: " << estim() << endl;
  return 0;
}
