#include <bits/stdc++.h>
using namespace std;
void perfectSquares(float s, float e)
{
    for (int i = s; i <= e; i++) {

        if (sqrt(i) == (int)sqrt(i))
            cout << i << " ";
    }
}

int main()
{
    int s, e;
    cout<<"Lower Range: ";
    cin>>s;
    cout<<"Upper Range: ";
    cin>>e;

    perfectSquares(s*s, e*e);

    return 0;
}
