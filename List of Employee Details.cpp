#include <windows.h>
#include <iostream>

using namespace std;

class employee
{
	int Employee_No;
	string Employee_Name;
	string Employee_Dept;
	string Employee_Designation;
public:
    void get_Employee_details();
    void show_Employee_details();


};
void employee::get_Employee_details()
{
    cout<<"Enter the emp no: ";
	cin>>Employee_No;
	cout<<"Enter the emp name: ";
	cin>>Employee_Name;
	cout<<"Enter the emp dept name : ";
	cin>>Employee_Dept;
	cout<<"Enter the emp designation : ";
	cin>>Employee_Designation;
}
void employee ::show_Employee_details()
{
    cout<<"Enter the emp no: "<<Employee_No<<"\n";
	cout<<"Enter the emp name: "<<Employee_Name<<"\n";
	cout<<"Enter the emp dept name : "<<Employee_Dept<<"\n";
	cout<<"Enter the emp designation : "<<Employee_Designation<<"\n";
}
int main()
{
    employee Employee;
    Employee.get_Employee_details();
    Employee.show_Employee_details();
    return 0;
}
