#include <iostream>
using namespace std;

int main (){
  int cel,fahr,kel;
  cout << "Temp in Celcius: ";
  cin >> cel;
  fahr = (9*cel/5)+32;
  cout << "Temp in Fahrenheit: " << fahr << endl;
  kel = (cel+273);
  cout << "Temp in Kelvin: " << kel << endl;
  {
    if (fahr == 100)
      cout << "The H2O will start to boil" << endl;
    else if ( farh > 100)
      cout << "The H2O will be boiling" << endl;
    else if (32 > fahr)
      cout << "The H2O will be frozen" << endl;
    else if (32 == farh)
      cout << "The H2O will start to freeze" << endl;
    else
      cout << "The H2O will be a liquid" << endl;
  }
  return 0;
}
