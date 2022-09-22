#include<iostream>
using namespace std;
class bill
{
	int N,X,Prev_Mon,Curr_Mon,M;
	char Name[40];
	public:
		void input();
		void display();
};
void bill::input()
{
	cout<<"Enter the consumer number: ";
	cin>>N;
	cout<<"Enter the Previous Month Reading:  ";
	cin>>Prev_Mon;
	cout<<"Enter the Current Month Reading:  ";
	cin>>Curr_Mon;
	cout<<"1.Domestic"<<endl<<"2.Commercial"<<endl<<"select the choice ";
	cin>>M;
}
void bill::display()
{
	X=Curr_Mon-Prev_Mon;
    if(M==1)
	{
		if(X<=100)
		{
		cout<<"Bill is "<<X;
	    }
		if(X>100&&X<=200)
		{
		cout<<"Bill is "<<X*2.5;
	    }
		if(X>200&&X<=500)
		{
		cout<<"Bill is "<<X*4;
	    }
		if(X<501)
		{
		cout<<"Bill is "<<X*6;
	    }
    }
	else if(M==2)
	{
		if(X<=100)
		{
		cout<<"Bill is "<<X*2;
	    }
		if(X>100&&X<=200)
		{
		cout<<"Bill is "<<X*4.5;
	    }
		if(X>200&&X<=500)
		{
		cout<<"Bill is "<<X*6;
	    }
		if(X<501)
		{
		cout<<"Bill is "<<X*7;
	    }
    }
}
int main()
{
 bill a;
 a.input();
 a.display();
}
