#include<iostream>
using namespace std;
int main() {
   int xa, s = 0;
   int n;
   cout<<"Enter N value : ";
   cin>>n;
   cout << "Enter the number : ";
   cin >> xa;
   while (xa != 0) {
      s = s + xa % 10;
      xa = xa / 10;
   }
   cout << "\nThe sum of "<<n<<" digits of a "<<n<<" digit number : "<< s;
}

