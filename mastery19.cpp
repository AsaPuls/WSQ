#include <iostream>
using namespace std;

int main () {
  int num1,num2;
  cout << "give me 2 numbers: " << endl;
  cin >> num1;
  cin >> num2;
  if (num1 > num2)
    cout << "The 1st number is bigger than the 2nd number" << endl;
  else if (num1 < num2)
    cout << "The 1st number is smaller than the 2nd number" << endl;
  else
    cout << "The 1st number is same number as the 2nd number" << endl;
return 0;
}
