#include <bits/stdc++.h>
using namespace std;

float Mean(float array[], int N){
    float Sum = 0;

    for(int i = 0;i < N; i++)
        Sum += array[i];

    return Sum/N;
}

float Median(float array[], int N){

    sort(array, array + N);

    if(N % 2 == 0)
        return (array[N/2 - 1] + array[N/2])/2;

    return array[N/2];
}

float Mode( float array[], int N){


    sort(array, array + N);


    int max_count = 1, res = array[0], count = 1;

    for (int i = 1; i < N; i++) {
        if (array[i] == array[i - 1])
            count++;
        else {
            if (count > max_count) {
                max_count = count;
                res = array[i - 1];
            }
            count = 1;
        }
    }

    if (count > max_count)
    {
        max_count = count;
        res = array[N - 1];
    }

    return res;
}

int main(){
    int N;
    float array[50];

    cout<<"Enter the size of array: ";
    cin>>N;


    cout<<"Enter the elements of array: ";
    for(int i = 0; i < N; i++)
        cin>>array[i];

    cout<<"\nMean = "<<Mean(array, N);
    cout<<"\nMedian = "<<Median(array, N);
    cout<<"\nMode = "<<Mode(array, N);

    return 0;
}
