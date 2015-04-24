#include <iostream>
using namespace std;

void dotProduct (int size){
  int Array[size], Array2[size],nums,result=0;
  cout << "Give me " << size << " values: ";
  for (int i=0; i<size; i++){
    cin >> nums;
    Array[i] = nums;
  }
  cout << "Give me " << size << " more values: ";
  for (int i=0; i<size; i++){
    cin >> nums;
    Array2[i] = nums;
  }
  for (int i=0; i<size; i++){
    result = result + Array[i]*Array2[i];
  }
  cout << "The result is: " << result << endl;
}
int main (){
  int size;
  cout << "How many numbers do you want to enter?: ";
  cin >> size;
  dotProduct (size);
  return 0;
}
