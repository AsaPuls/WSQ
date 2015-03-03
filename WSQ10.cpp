#include <iostream>
#include <cmath>
using namespace std;

double StandardDeviation(double a,double b,double c,double d,double e,double f,double g,double h,double i,double j, double sum, double ave){
  double variant = ((pow ((a-ave),2)+pow ((b-ave),2)+pow ((c-ave),2)+pow ((d-ave),2)+pow ((e-ave),2)+pow ((f-ave),2)+pow ((g-ave),2)+pow ((h-ave),2)+pow ((i-ave),2)+pow ((j-ave),2))/10);
  double standev = sqrt(variant);
  return standev;
}
int main(){
  double a,b,c,d,e,f,g,h,i,j,sum,ave;
  cout << "Give me 10 numbers" << endl;
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;
  cin >> e;
  cin >> f;
  cin >> g;
  cin >> h;
  cin >> i;
  cin >> j;
  sum = a+b+c+d+e+f+g+h+i+j;
  ave = sum/10;
  cout << "Sum: " << sum << endl;
  cout << "Average: " << ave << endl;
  cout << "Standard Deviation: " << StandardDeviation(a,b,c,d,e,f,g,h,i,j,sum,ave) << endl;
  return 0;
}
