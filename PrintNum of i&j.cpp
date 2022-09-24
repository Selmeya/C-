#include <iostream>
#include <string>
using namespace std;






class IntI{
private:
	int i;
public:
	IntI(int i){
		this->i=i;
	}


	void printNum(){
		cout<<"i = "<<i<<"\n";
	}
};


class IntJ:public IntI{
private:
	int j;
public:
	IntJ(int i,int j):IntI(i){
		this->j=j;
	}


	void printNum(){
		IntI::printNum();
		cout<<"j = "<<j<<"\n";
	}
};


int main() {
	IntJ IntJ(5,6);
	IntJ.printNum();




	system("pause");
	return 0;
}
