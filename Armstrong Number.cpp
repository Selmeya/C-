#include <iostream>
using namespace std;

int main() {
    int num, Originalnum, Remainder, Result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    Originalnum = num;

    while (Originalnum != 0) {
        Remainder = Originalnum % 10;

        Result += Remainder * Remainder * Remainder;
        Originalnum /= 10;
    }

    if (Result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}
