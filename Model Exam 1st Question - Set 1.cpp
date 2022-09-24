#include <iostream>
using namespace std;

void reverseString(string& sel, int m, int i) {
   if (m <= i) {
      return;
   }
   swap(sel[i], sel[m]);
   reverseString(sel, m - 1, i + 1);
}

int main() {
   string sel = "";
   cout<<"String: ";
   cin>>sel;

   reverseString(sel,sel.length() - 1, 0);
   cout << "Reversed String: "<<sel << endl;
}

