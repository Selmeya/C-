#include<iostream>
using namespace std;
int main(){
	int s,sum;
	cout<<"Given number: ";
	cin>> s;
	sum=0;
	for(int i = 1; i <s;i++){
        if(s % i == 0)
            sum = sum + i;
    }
    
    if(sum == s)
        cout << s <<" is a perfect number";
    else if (s<sum)
        cout << "Enter the valid number, The input is invalid";
    else
        cout << s <<" is not a perfect number";
    




   
	
}
