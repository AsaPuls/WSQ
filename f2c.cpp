#include <iostream>
using namespace std;

int main(){
  double farh,cel,kel;
  cout << "Temp in Farhneheit: ";
  cin >> farh;
  cel = (5*(farh-32)/9);
  cout << "Temp in Celcius: " << cel << endl;
  kel = (cel+273);
  cout << "Temp in Kelvin: " << kel << endl;
  if (farh > 100)
    cout << "The H2O will be boiling" << endl;
  else if (farh == 100)
    cout << "The H2O will start to boil" << endl;
  else if (32 > farh)
    cout << "The H2O will be freezing" << endl;
  else if (32 == farh)
    cout << "The H2O will start to freeze" << endl;
  else
    cout << "The H2O will be a liquid" << endl;
  return 0;
}
