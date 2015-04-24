#include <iostream>
using namespace std;

void findThrees (int size){                     // With Arrays
  double Array[size],nums,remdiv;
  int total=0;
  for (int i=0; i<size; i++){
    cin >> nums;
    Array[i] = nums;
  }
  for (int i=0; i<size; i++){
    remdiv = (Array[i]/3)-int(Array[i]/3);
    if (remdiv == 0){
      total = total + Array[i];
    }
  }
  cout << "The result is: " << total << endl;
}
void findThrees2 (int size){                    // Without Arrays
  double nums,remdiv2;
  int total2=0;
  for (int i=0; i<size; i++){
    cin >> nums;
    remdiv2 = (nums/3)-int(nums/3);
    if (remdiv2 == 0){
      total2 = total2 + nums;
    }
  }
  cout << "The result is: " << total2 << endl;
}
int main (){
  int size;
  cout << "How many numbers do you want to calculate: ";
  cin >> size;
  cout << "Give me " << size << " numbers" << endl;
  findThrees2(size);
  return 0;
}
