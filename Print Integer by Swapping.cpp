#include<iostream>
using namespace std;
class print{
 public:
  void output(int s, char e[20])
  {
   cout<<"Integer is "<<s<<endl;
   cout<<"Character is "<<e<<endl;
  }
  void output(char e[20], int s)
  {
   cout<<"Character is "<<e<<endl;
   cout<<"Integer is "<<s<<endl;
  }
};
int main()
{
 print obj;
 obj.output("Selmiya Loyola", 2004);
 obj.output(2004, "Selmiya Loyola");
}
