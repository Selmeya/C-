#include<iostream>
using namespace std;

inline int Sum(int A,int B,int C,int D,int E)
{
        return(A+B+C+D+E);
}

inline int Mul(int A,int B,int C,int D,int E)
{
        return(A*B*C*D*E);
}

int main()
{
        int A,B,C,D,E;
        cout<<"\nEnter 1st number :: ";
        cin>>A;
        cout<<"\nEnter 2nd number :: ";
        cin>>B;
        cout<<"\nEnter 3rd number :: ";
        cin>>C;
        cout<<"\nEnter 4th number :: ";
        cin>>D;
        cout<<"\nEnter 5th number :: ";
        cin>>E;

        cout<<"\nSum of 5 Numbers [ "<<A<<"+"<<B<<"+"<<C<<"+"<<D<<"+"<<E<<" ] = "<<Sum(A,B,C,D,E)<<"\n";
        cout<<"\nProduct of 5 Numbers [ "<<A<<"*"<<B<<"*"<<C<<"*"<<D<<"*"<<E<<" ] = "<<Mul(A,B,C,D,E)<<"\n";

        return 0;
}
