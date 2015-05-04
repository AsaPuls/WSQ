#include <iostream>
using namespace std;

int main (){
  int num;
  cout << "Give me a number between 1 and 100: ";
  cin >> num;
  if (num>0 && num<101){
    cout << "You completed the task correctly!!" << endl;
  }
  else {
    cout << "You completed the task incorrectly!!" << endl;
  }
}
