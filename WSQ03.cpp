t#include <iostream>
using namespace std;

int main (){
  double high,low;
  cout << "Give me a number: ";
  cin >> high;
  cout << "Give me a smaller number: ";
  cin >> low;
  cout << "The Sum is: " << high+low << endl;
  cout << "The Difference is: " << high-low << endl;
  cout << "The Product is: " << high*low << endl;
  cout << "The Integer Division is: " << int(high/low) << endl;
  cout << "The Non Integer Division is: " << (high/low)-int(high/low) << endl;
  return 0;
}
