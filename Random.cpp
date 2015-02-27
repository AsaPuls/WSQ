#include <iostream>
using namespace std;

int main (){
  int num;
  cout << "Give me a number: ";
  cin >> num;
  if (num%6 == 0)
    cout << "The number is divisible by both 2 and 3" << endl;
  else if (num%2 == 0)
    cout << "The number is divisible by 2 but not 3" << endl;
  else if (num%3 == 0)
    cout << "The number is divisible by 3 but not 2" << endl;
  else
    cout << "The number is neither divisible by 2 nor 3" << endl;
    return 0;
}
