#include <iostream>
using namespace std;

int main()
{
  int guess, num;
  srand (time(0));
  num = rand() % 100 + 1;
  cout << "Guess My Number. It Is Between 1 And 100: ";
    do{
      cin >> guess;
      if (guess > num )
        cout << "Too High, Try Again: ";
      else if (guess < num)
        cout << "Too Low, Try Again: ";
    } while (guess != num);
  if (guess == num)
    cout << "You Are Correct!" << endl;
  return 0;
}
