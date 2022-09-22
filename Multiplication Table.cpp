#include <iostream>
using namespace std;

int main()
{
    int N;
    int n;
    cout << "Enter a positive integer: ";
    cin >>N ;
    cout << "Enter a integer till which you want the table: ";
    cin >>n ;


    for (int i = 1; i <= n; ++i) {
        cout << N << " * " << i << " = " << N * i << endl;
    }

    return 0;
}
