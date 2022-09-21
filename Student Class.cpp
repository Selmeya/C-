#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
public:
    Student(string l)
    {
        name = l;
    }
    Student()
    {
        name = "Unknown";
    }
    void print_name()
    {
        cout << name << endl;
    }
};

int main()
{
    Student l1("John");
    Student l2;
    l1.print_name();
    l2.print_name();
    return 0;
}
