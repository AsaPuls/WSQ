#include <iostream>
using namespace std;

long double fact(int divisor,double factorial){
  for (int i=1; i<=divisor; i++) {
    factorial = factorial*i;
  }
  return factorial;
}
long double estim(int limdig){
  long double e=1;
  int factorial;
  for (int divisor=1; divisor<limdig; divisor++){
    e = e + (1/fact(divisor,factorial));
  }
  return e;
}
int main (){
  int limdig;
  cout << "How many terms do you want to calculate: ";
  cin >> limdig;
  cout << "The value estimates for e is: " << estim(limdig) << endl;
  return 0;
}
