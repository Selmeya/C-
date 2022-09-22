#include <iostream>

using namespace std;

int main()
{
    int Age;
    int Eighteen = 18;
    Eighteen = Age;
    cout<<"Enter your age: "<<endl;
    cin>>Age;
    if (Age == '18'&& Age == Eighteen)
        cout<<"You are allowed to vote now";
    else if (Age <= '18')
        cout<<"You are allowed to vote after "<<18-Age<< "years";

    return 0;
}
