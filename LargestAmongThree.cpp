#include<iostream>
using namespace std;
int main(){

	float s,e,l;
	cout<<"Given numbers: ";
	cin>>s>>e>>l;
	if (s>e and s>l){
		cout<<"Maximum Number: "<<s;
	}
	else if (e>s and e> l){
		cout<<"Maximum Number: "<<e;
    }
    else{
    	cout<<"Maximum Number: "<<l;
	}
	return 0;
}
	  

	

