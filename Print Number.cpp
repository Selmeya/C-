#include <iostream>
using namespace std;
class PrintNumber
{
public:
    void printn(int s)
    {
        cout<<s<< endl;
    }
    void printn(float s)
    {
        cout<<s<< endl;
    }
    void printn(double s)
    {
        cout<<s<<endl;
    }
};
int main()
{
    PrintNumber obj;
    obj.printn(2);
    obj.printn(2.5);
    obj.printn(2.123456);
}
