#include <bits/stdc++.h>
using namespace std;
int calculateEvenSum(int N)
{
    if (N <= 0)
        return 0;
    int Fibo[2 * N + 1];
    Fibo[0] = 0, Fibo[1] = 1;
    int Sum = 0;
    for (int i = 2; i <= 2 * N; i++) {
        Fibo[i] = Fibo[i - 1] + Fibo[i - 2];
        if (i % 2 == 0)
            Sum += Fibo[i];
    }
    return Sum;
}
int main()
{
    int N;
    cout<<"N = ";
    cin>>N;
    cout << "Even indexed Fibonacci Sum upto "
         << N << " terms: "
         << calculateEvenSum(N) << endl;
    return 0;
}

