#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

class Marks
{


	public:
	int Rollno;
	int Mark;
	string Name;

	void input()
	{
		cout << "Enter name: "<<endl;
	    cin>>Name;
		cout<<"Enter Roll No: "<<endl;
	    cin>>Rollno;

	}




};


class Physics: public Marks{
	public:
		int Phy;

		Physics()
		{
			cout<<"Enter physics marks : "<<endl;
			cin>>Phy;
		}
};


class Chemistry: public Marks{
	public:
		int Chem;

		Chemistry()
		{
			cout<<"Enter Chemistry marks : "<<endl;
			cin>>Chem;
		}
};


class Mathematics: public Marks{
	public:
		int Maths;

		Mathematics()
		{
			cout<<"Enter Mathematics marks : "<<endl;
			cin>>Maths;
		}
};




int main()
{
	int N;
	cout<<"Enter number of students in a class : "<<endl;
	cin>>N;

	Marks s[N];
	int Sum =0;
	int Sum1 =0;
	int Sum2 =0;
	int Sum3 =0;
	cout<<endl;
	for(int i=0; i<N; i++)
	{
		cout<<"Enter details of student"<<i+1<<endl;
		cout<<"----------------------------"<<endl;
		s[i].input();
		Physics p;
		Chemistry c;
		Mathematics m;

		s[i].Mark = p.Phy + c.Chem + m.Maths;
		Sum += s[i].Mark;
		Sum1 += p.Phy;
		Sum2 += c.Chem;
		Sum3 += m.Maths;
		cout<<endl;

	}

	int avgp = Sum1/N;
	int avgc = Sum2/N;
	int avgm = Sum3/N;
	cout<<endl<<"Physics Average marks of the class is : "<<avgp;
	cout<<endl<<"Chemistry Average marks of the class is : "<<avgc;
	cout<<endl<<"Mathematics Average marks of the class is : "<<avgm<<endl<<endl;
}
