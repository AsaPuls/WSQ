#include <iostream>
#include <cstring>
using namespace std;

void tri(int size){
  string letters;
  for (int i=0; i<size; i++){
    letters = letters + "T";
    cout << letters << endl;
  }
  for (int i=(size-1); i>0; i--){
    for (int j=1; j<=i; j++){
      cout << "T" ;
    }
    cout << endl;
  }
}
int main(){
  int size;
  cout << "Give me the size of the triangle: ";
  cin >> size;
  tri (size);
  return 0;
}
