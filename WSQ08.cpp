#include <iostream>
using namespace std;

double Addition(double num1, double num2){
  double Addition = num1+num2;
  return Addition;
}
double Subtraction(double num1,double num2){
  double Subtraction = num1-num2;
  return Subtraction;
}
double Multiplication(double num1,double num2){
  double Multiplication = num1*num2;
  return Multiplication;
}
int Division1(double num1,double num2){
  int Division1 = num1/num2;
  return Division1;
}
double Division2(double num1,double num2){
  double Division2 = (num1/num2)-int(num1/num2);
  return Division2;
}
int main (){
  double num1,num2;
  cout << "Give me a number: ";
  cin >> num1;
  cout << "Give me another number: ";
  cin >> num2;
  cout << "The sum is: " << Addition (num1,num2) << endl;
  cout << "The difference is: " << Subtraction (num1,num2) << endl;
  cout << "The product is: " << Multiplication (num1,num2) << endl;
  cout << "The integer division is: " << Division1 (num1,num2) << endl;
  cout << "The remainder of the integer division is: " << Division2 (num1,num2) << endl;
  return 0;
}
