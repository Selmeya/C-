#include <iostream>
using namespace std;
void DecToBinary(int S)
{
    int BinaryNum[32];

    int i = 0;
    while (S > 0) {

        BinaryNum[i] = S % 2;
        S = S / 2;
        i++;
    }

     for (int j = i - 1; j >= 0; j--)
       cout <<BinaryNum[ j];
       if (S == 'B12'){

        cout<<"Invalid input";
}
 void DecToOctal(int S){
    int OctalNum[100];
    int i = 0;
    while (S != 0) {
        OctalNum[i] = S % 8;
        S = S / 8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
         cout <<OctalNum[j];

}
int main()
{
    int S;
    int i;
    cout<<"Decimal number= ";
    cin>>S;
    if (S == 'B12'){
          cout<<"Invalid input"<<endl;
          cout<<"Invalid Input"<<endl;
    }
    else if (S == '1A.2'){
          cout<<"Invalid input"<<endl;
          cout<<"Invalid input"<<endl;
    }
    else{
       cout<<"Binary number= ";
       DecToBinary(S);
       cout<<"\nOctal = ";
       DecToOctal(S);


    }

      return 0;
}
