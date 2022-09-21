#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
    char s[100];
    int i,len,temp;
    cout<<"Enter a String as you wish\n";
    cin>>s;
    len=strlen(s);
    for(i=0; i<len/2; i++){
        temp=s[i];
        s[i]=s[len-i-1];
        s[len-i-1]=temp;
    }
   cout<<"Given String is reversed here\n"<<s;
    getch();
    return 0;
}
