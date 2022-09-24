#include<stdio.h>
#include<conio.h>
class student
{
	char name[30];
	int rollno;
	int sub[3];
	int total;
};

int main()
{
	int i, n, j;
	cout<<"Enter number of students data you want to enter:\n";
	cin>>n;
	class student st[20], temp;

	for(i=0;i < n;i++)
	{

		cout<<"Enter name of student \n"<<(i+1));
		cin>>st[i].name;
		cout<<"Enter Roll No of student \n"<<(i+1);
		cin>>st[i].rollno;
        cout<<"Enter marks for 3 subjects of student \n"<<(i+1);
		cin>>st[i].sub[0];
		cin>>st[i].sub[1];
		cin>>st[i].sub[2];
		st[i].total = (st[i].sub[0]+st[i].sub[1]+st[i].sub[2]);
		cout<<"Total Marks of " <<(i+1)<< "student = \n"<< st[i].total);
	}
	for(i=0;i < (n-1);i++)
	{
		for(j=0;j < (n-i-1);j++)
		{
			if(st[j].total < st[j+1].total)
			{
				temp = st[j];
				st[j] = st[j+1];
				st[j+1] = temp;
			}
		}
	}
	cout<<"\n\n\n\t\t******Sorted in descending order******";
	for(i=0; i < n;i++)
	{
		cout<<"\nName of student: "<<st[i].name;
		cout<<"\nRoll No of student: "<<st[i].rollno;
		cout<<"\nTotal of student: %d\n"<<st[i].total;
	}
	return 0;
}
