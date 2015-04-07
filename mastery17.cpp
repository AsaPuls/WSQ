#include <iostream>
using namespace std;

int main() {
  double farh,cel,kel;
  int switcher;
  cout << "Temp in Farhneheit: ";
  cin >> farh;
  cel = (5*(farh-32)/9);
  cout << "Temp in Celcius: " << cel << endl;
  kel = (cel+273);
  cout << "Temp in Kelvin: " << kel << endl;
  if (farh > 100)
    switcher = 1;
  else if (farh == 100)
    switcher = 2;
  else if (32 > farh)
    switcher = 3;
  else if (32 == farh)
    switcher = 4;
  else
    switcher = 5;
  switch(switcher){
    case 1:
      cout << "The H2O will be boiling" << endl;
    break;
    case 2:
      cout << "The H2O will start to boil" << endl;
    break;
    case 3:
      cout << "The H2O will be freezing" << endl;
    break;
    case 4:
      cout << "The H2O will start to freeze" << endl;
    break;
    case 5:
      cout << "The H2O will be a liquid" << endl;
    break;
  }
  return 0;
}
