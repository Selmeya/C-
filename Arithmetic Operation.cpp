#include <iostream>

using namespace std;

int main()
{
    float s, e;
	char l;
	cout<<"Enter the value of A: \n";
	cin>>s;
	cout<<"Enter the value of B: \n";
	cin>>e;
	cout<<" + for Add \n";
	cout<<" - for Sub \n";
	cout<<" / for Div \n";
	cout<<" * for Mul \n";
	cout<<"% for Mod \n";
	cout<<"Enter your Choice: ";
	cin>>l;
	if(l== '+')
		cout<<"The value of addition : "<<s+e;

	else if (l == '-')
		cout<<"The value of subtraction : "<<s-e;


	else if (l == '/')
		cout<<"The value of division : "<<s/e;


	else if (l == '*')
		cout<<"The value of multiplication : "<<s*e;

	else
		cout<< "Enter the valid operator";
}
