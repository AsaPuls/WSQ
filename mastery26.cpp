#include <iostream>
using namespace std;

int main (){
  int Array1[3], Array2[3], Array3[3];
  cout << "This is a 3X3 matrix which contains the values 1-9" << endl;
  for (int i=0; i<3; i++){
    Array1[i] = i+1;
    Array2[i] = i+4;
    Array3[i] = i+7;
  }
  for (int i=0; i<3; i++){
    cout << Array1[i] << "  ";
  }
  cout << endl;
  for (int j=0; j<3; j++){
    cout << Array2[j] << "  ";
  }
  cout << endl;
  for (int k=0; k<3; k++){
    cout << Array3[k] << "  ";
  }
  cout << endl;
  return 0;
}
