#include <iostream>
#include <cmath>
using namespace std;

double BM (double num, double guess){
  double sqrt1, sqrt2;
  do{
    sqrt1 = ((guess+(num/guess))/2);
    sqrt2 = ((sqrt1+(num/sqrt1))/2);
    guess = sqrt2;
  }while (sqrt1 != sqrt2);
  return sqrt1;
}
int main (){
  double num;
  double guess;
  cout << "Give me a number: ";
  cin >> num;
  cout << "Guess the square root: ";
  cin >> guess;
  cout << "Its actually: " << BM (num,guess) << endl;
  return 0;
}
