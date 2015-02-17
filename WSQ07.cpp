#include <iostream> //Commenting for the Mastery 7
using namespace std;

int main(){
  int low,high;
  cout << "Give me a number for the lower end: ";
  cin >> low;
  cout << "Give me a number for the higher end: ";
  cin >> high;
  int result = 0;
  for (int i=low; i<=high; i++)
  {result += i;}
  cout << "The sum of this range of numbers is: " << result << endl;
  return 0;
}
