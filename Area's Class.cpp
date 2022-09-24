#include <iostream>
using namespace std;

class Area
{
public:
    void output(int s, int e)
    {
        cout<<"Enter breadth: ";
        cin>>s;
        cout<<"Enter length: ";
        cin>>e;

        cout<<"Area of Rectangle is = "<<s*e<<endl;
    }

    void output(int l)
    {
        cout<<"Enter side: ";
        cin>>l;
        cout<<"Area of Square is = "<<l*l<< endl;
    }
};

int main()
{
    int s,e,l;
    Area obj;
    obj.output(s,e);
    obj.output(l);
}
