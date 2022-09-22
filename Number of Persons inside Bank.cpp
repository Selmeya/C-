#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Overload
{
 public:
    int operator ++(int count)
		{
			count = count + 1 ;
			return count;
		};
		int operator --(int count)
		{
			count = count - 1 ;
			return count;
        };
};

int main()
{
	int Number_of_persons = 0 ;
    char Choice;
	while ( 1 )
	{
		cout << "Enter your choice : 1. Enters ( E ) 2. Leaves ( L ) 3. Exit( X ) 4. Print (P) ."<<endl;

    	cin >> Choice;

        switch ( Choice )
		{
			case 'E' :
				Number_of_persons = ++(Number_of_persons);
				cout << "Total number of person in bank is: ";
				cout << Number_of_persons;
				cout << endl;
				break;
			case 'L' :
				Number_of_persons= --(Number_of_persons);
				cout << "Total number of person in bank is: ";
				cout << Number_of_persons;
				cout << endl;
				break;
			case 'P' :
				cout << "Total number of person in bank is: ";
				cout << Number_of_persons;
				cout << endl;
				break;

			case 'X' :
				exit(EXIT_SUCCESS);
			default :
				cout << "Enter a correct choice."<< endl;
				break;
		}
	}
	return 0;
}
