#include <iostream>
using namespace std;

int main()
{

  int s, Reversed_Number = 0, Remainder;

  cout << "Enter an integer: ";
  cin >> s;

  while(s != 0) {
    Remainder = s % 10;
    Reversed_Number = Reversed_Number * 10 + Remainder;
    s /= 10;
  }

  cout << "Reversed Number = " << Reversed_Number;

  return 0;
}
