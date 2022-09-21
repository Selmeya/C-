
#include <bits/stdc++.h>
using namespace std;

string RemoveVowel(string str)
{
 vector<char> Vowels = {'a', 'e', 'i', 'o', 'u',
      'A', 'E', 'I', 'O', 'U'};

 for (int i = 0; i < str.length(); i++)
 {
  if (find(Vowels.begin(), Vowels.end(),
     str[i]) != Vowels.end())
  {
   str = str.replace(i, 1, "");
   i -= 1;
  }
 }
 return str;
}

int main()
{
 string str=" " ;
 cout<<"Enter a string: ";
 cin>>str;
 cout << RemoveVowel(str) << endl;

 return 0;
}


