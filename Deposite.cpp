#include <iostream>
using namespace std;

class Bank
{
public:
    int getBalance()
    {
        return 0;
    }
};

class BankA : public Bank
{
    int Amount;
public:
    BankA(int s)
    {
        Amount = s;
    }

    int getBalance()
    {
        return Amount;
    }
};

class BankB : public Bank
{
    int Amount;
public:
    BankB(int e)
    {
        Amount = e;
    }

    int getBalance()
    {
        return Amount;
    }
};

class BankC : public Bank
{
    int Amount;
public:
    BankC(int l)
    {
        Amount = l;
    }

    int getBalance()
    {
        return Amount;
    }
};

int main()
{
    BankA s(1000);
    BankB e(1500);
    BankC l(2000);
    cout <<"Bank A "<< s.getBalance() << endl;
    cout << "Bank B "<<e.getBalance() << endl;
    cout << "Bank C "<<l.getBalance() << endl;
    return 0;
}
