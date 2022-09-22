#include <iostream>
using namespace std;

int main()
{
    int s;

    cout << "Enter a positive integer: ";
    cin >> s;

    for (int i = 1; i <= 12; ++i) {
        cout << s << " * " << i << " = " << s * i << endl;
    }

    return 0;
}
