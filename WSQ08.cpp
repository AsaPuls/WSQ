#include <iostream>
using namespace std;

double Addition(double num1, double num2){        //Calculates the addition
  double Sum = num1+num2;                         //of numbers 1 and 2
  return Sum;
}
double Subtraction(double num1,double num2){      //Calculates the subtraction
  double Sub = num1-num2;                          //of numbers 1 and 2
  return Sub;
}
double Multiplication(double num1,double num2){   //Calculates the multiplication
  double Pro = num1*num2;                          //of numbers 1 and 2
  return Pro;
}
int Division1(double num1,double num2){           //Calculates the integral division
  int IntDiv = num1/num2;                         //of numbers 1 and 2
  return IntDiv;
}
double Division2(double num1,double num2){        //Calculates the remainder of the integral
  double Rem = (num1/num2)-int(num1/num2);        //division of numbers 1 and 2
  return Rem;
}
int main (){
  double num1,num2;
  cout << "Give me a number: ";
  cin >> num1;                                    //Inputs first number
  cout << "Give me another number: ";
  cin >> num2;                                    //Inputs second number
  cout << "The sum is: " << Addition (num1,num2) << endl;               //Calls Addition function
  cout << "The difference is: " << Subtraction (num1,num2) << endl;     //Calls Subtraction function
  cout << "The product is: " << Multiplication (num1,num2) << endl;     //Calls Multiplication function
  cout << "The integer division is: " << Division1 (num1,num2) << endl; //Calls Division1 function
  cout << "The remainder of the integer division is: " << Division2 (num1,num2) << endl;   //Calls Division2 function
  return 0;
}
