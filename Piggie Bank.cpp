#include <iostream>
using namespace std;

class PiggieBank
{
    int Amount;
public:
    PiggieBank()
    {
       Amount = 50;
    }

    PiggieBank(int s)
    {
       Amount = 50;
       Amount = s+Amount;
    }

    void print_Amount()
    {
        cout <<Amount << endl;
    }
};

int main()
{
    PiggieBank s1;
    PiggieBank s2(15);
    s1.print_Amount();
    s2.print_Amount();
    return 0;
}
