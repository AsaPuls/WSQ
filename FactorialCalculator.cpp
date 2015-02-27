#include <iostream>
using namespace std;

int main(){
  int number, factorial=1;
  cin >> number;
    for(int i=number; i>=1; i--){
      factorial = factorial*i;
    }
  cout << factorial << endl;
  return 0;
}
