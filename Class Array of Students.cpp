#include<iostream>
#include<string>
using namespace std;
class Student{
 int Age;
 string Name, Add;
 public:
  Student()
  {
   Name="unknown";
      Age=0;
    Add="not available";
  }

 setinfo(char Nam[20], int Ag)
  {
   Name=Nam;
      Age=Ag;
   cout<<"Details of Student is"<<endl;
   cout<<"Name : "<<Name<<endl;
   cout<<"Age : "<<Age<<endl;
  }

 setinfo(string Nam, int Ag, string Addres)
  {
   Name = Nam;
      Age= Ag;
    Add=Addres;
  }
 void display()
  {
    cout<<"Name : "<<Name<<endl;
    cout<<"Age : "<<Age<<endl;
    cout<<"Address : "<<Add<<endl;
  }
};
int main()
{
 int j=10;
 Student s[j];
 int Age;
 string Name, Add;
 cout<<"\t Enter Details of Students"<<endl;
 cout<<"\n"<<endl;
 for (int i=0; i<j; i++)
 {
     cout<<" Enter details of "<<i+1<<" Student"<<endl;
     cout<<"\t Name : ";
     cin>>Name;
     cout<<"\t Age : ";
     cin >>Age;
     cout<<"\t Address : ";
     cin>>Add;
     s[i].setinfo(Name, Age, Add);
     cout<<endl;
 }
   cout<<"\t Displaying Details of Students Entered"<<endl;
   cout<<"\n"<<endl;
   for(int i=0; i<j; i++)
   {
    cout<<"\n Details of "<<i+1<<" Student is"<<endl;
    s[i].display();
   }


}
