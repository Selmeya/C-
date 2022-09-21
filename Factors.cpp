#include<iostream>
using namespace std;

int main()
{
    int s, e,count=0;

    cout << "Enter a positive integer: ";
    cin >> s;

    cout << "Number of factors in  " << s << " are: ";
    for(e = 1; e <= s; ++e) {
        if(s % e == 0)
            count = count+1;
    }
    cout<< count;

    return 0;
}
