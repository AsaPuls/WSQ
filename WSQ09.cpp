#include <iostream>
using namespace std;

int Factorial(int number){    // This is a seperate function which
  int i,factorial=1;          // calculates the factorial of the
  for(i=number; i>=1; i--)    // number inputted in the main function
    factorial = factorial*i;
  return factorial;
}
int main (){
  char response;
  cout << "Would you like to calculate the factorial of a number?" << endl << "Y or N" << endl;
  cin >> response;            // Inputs response; Either starts loop or end the program
  while (response == 'Y'){    // If response is yes: Starts a loop
    int number;
    cout << "Give me a number to calculate the factorial of:" << endl << "The number must be an integer between 1 and 12: ";
    cin >> number;             // Input the number you want to calculate the factorial of
    if (number>0 && number<13)
      cout << "The factorial of the number " << number << " is: " << Factorial(number) << endl;
    if (number<=0)            // You can not have a factorial of a negative number
      cout << "The number must be a postive integer" << endl;
    if (number>=13)           // At 13 the calculated factorial is not accurate
      cout << "The number must be less than 13 or else the result will not be accurate" << endl;
    cout << "Would you like to calculate the factorial of another number?" << endl << "Y or N" << endl;
    cin >> response;          // Changes the response, creates a place to exit the loop
  }                           // If there was no place to change the response the loop will never end
  if (response == 'N')        // If response is no: Prints text and ends program
    cout << "Then why did you open this program!" << endl << "You fucking idiot!" << endl;
  return 0;                   // The only place which exits the main program is here
}
