#include <iostream>
using namespace std;
class Bank1{
private:
    int AccountNum1;
    char Nameof_AccountHolder1;

    float Balance1;
public:
    void CreateAccount1(){
        cout<<"Enter your Account Number: "<<endl;
        cin>>AccountNum1;
        cout<<"Enter your name: "<<endl;
        cin>>Nameof_AccountHolder1;
        cout<<"Account Balance : "<<endl;
        cin>>Balance1;


        cout<<"\nEnter your Account Number: "<<AccountNum1<<endl;
        cout<<"\nEnter your name: "<<Nameof_AccountHolder1<<endl;
        cout<<"\nAccount Balance : "<<Balance1<<endl;
    }
};
class Bank2{
private:
    int AccountNum2;
    char Nameof_AccountHolder2;

    float Balance2;
public:
    void CreateAccount2(){
        cout<<"Enter your Account Number: "<<endl;
        cin>>AccountNum2;
        cout<<"Enter your name: "<<endl;
        cin>>Nameof_AccountHolder2;
        cout<<"Account Balance : "<<endl;
        cin>>Balance2;


        cout<<"\nEnter your Account Number: "<<AccountNum2<<endl;
        cout<<"\nEnter your name: "<<Nameof_AccountHolder2<<endl;
        cout<<"\nAccount Balance : "<<Balance2<<endl;
    }
};
    int main(void){

        int AccountNum1;
        char Nameof_AccountHolder1[100];
        float Balance1;
        cout<<" Enter Details: "<<endl;
        cout<<"***********"<<endl;
        cout<<" Accout No. "<<endl;
        cin>>AccountNum1;
        cout<<" Name : "<<endl;
        cin>>Nameof_AccountHolder1;
        cout<<" Balance : "<<endl;
        cin>>Balance1;

        int AccountNum2;
        char Nameof_AccountHolder2[100];
        float Balance2;
        cout<<" Enter Details: "<<endl;
        cout<<"***********"<<endl;
        cout<<" Accout No. "<<endl;
        cin>>AccountNum2;
        cout<<" Name : "<<endl;
        cin>>Nameof_AccountHolder2;
        cout<<" Balance : "<<endl;
        cin>>Balance2;
        Bank1 p1=Bank1();
        Bank2 p2=Bank2();

        int NewAccountNum;
        float newBalance;
        cout<<" Enter Details of the new Joint Account: "<<endl;
        cout<<"***********"<<endl;
        cout<< "Enter the new Account Number: "<<endl;
        cin>>NewAccountNum;
        cout<<"The account holder's for the account are: "<<Nameof_AccountHolder1<<" and "<<Nameof_AccountHolder2<<" \n";
        cout<<"The current Account Balance : \n "<<Balance1+Balance2;
        return 0;
    }
