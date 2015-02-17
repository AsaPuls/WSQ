#include <cstdlib>
#include <iostream>
using namespace std;

int main (){
  srand (time(NULL));
  int A = rand() % 1000;
  int B = rand() % 1000;
  cout << "The First Number Is... " << A << endl;
  cout << "The Second Number Is... " << B << endl;
  cout << "The Mean is... " << (A+B)/2 << endl;
  return 0;
}
