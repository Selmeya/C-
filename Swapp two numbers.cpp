#include <iostream>

using namespace std;

int main()
{
   float s,e,sel;
   cout<<"a = ";
   cin>>s;
   cout<<"b = ";
   cin>>e;
   sel = s;
   s = e;
   e = sel;

   cout<< "a = "<<s;
   cout<< "\nb = "<<e;
}
