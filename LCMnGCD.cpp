#include<iostream>
using namespace std;
int GCD(int m, int n) {
   int R = 0, A, B;
   A = (m > n) ? m : n;
   B = (m < n) ? m : n;
   R = B;
   while (A % B != 0) {
      R = A % B;
      A = B;
      B = R;
   }
   return R;
}
int LCM(int m, int n) {
   int A;
   A = (m > n) ? m: n;
   while (true) {
      if (A % m == 0 && A % n == 0)
         return A;
         ++A;
   }
}
int main(int argc, char **argv) {
   cout << "Enter the two numbers: ";
   int m, n;
   cin >> m >> n;
   cout << "The GCD of two numbers is: " << GCD(m, n) << endl;
   cout << "The LCM of two numbers is: " << LCM(m, n) << endl;
   return 0;
}
