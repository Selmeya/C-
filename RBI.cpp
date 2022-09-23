#include <iostream>
using namespace std;
class Guidelines
{
public:

   float minimumInterestRate = 4;
   double minimumBalanceAllowed = 500;
   double maximumWithdrawal = 50000;
};

int main()
{
   Guidelines obj;
   float Rate;
   double Withdrawal;
   double Balance;

   cout << "Enter interest rate \n";

   cin >> Rate;
   if (obj.minimumInterestRate <= Rate)
   {
       cout << "Eligible under guidelines rules\n";
   }
   else
   {
       cout << "Not eligible under guidelines rules\n";
   }
   cout << "Enter withdrawal \n";
   cin >> Withdrawal;
   if (obj.maximumWithdrawal >= Withdrawal)
   {
       cout << "Eligible under guidelines rules\n";
   }
   else
   {
       cout << "Not elgible under guidelines rules\n";
   }

   cout << "Enter minimum balance\n";
   cin >> Balance;

   if (obj.minimumBalanceAllowed <= Balance)
   {
       cout << "Eligible \n";
   }
   else
   {
       cout << "Not eligible \n";
   }

   cin.get();
   cin.get();


   return 0;
}
