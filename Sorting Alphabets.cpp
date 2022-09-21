#include <bits/stdc++.h>
using namespace std;
void print(vector<string> Names){
	printf("printing ........\n");
	for(int i=0;i<Names.size();i++)
		cout<<Names[i]<<endl;
	printf("\n");
}

bool mycomp(string a, string b){
	return a<b;
}

vector<string> alphabaticallySort(vector<string> a){
	int n=a.size();
	sort(a.begin(),a.end(),mycomp);
	return a;
}

int main()
{
	int n;
	cout<<"enter number of names to be added: ";
	scanf("%d",&n);
	vector<string> Names;
	string Name;
	cout<<"enter names: \n";

	for(int i=0;i<n;i++){
		cin>>Name;
		Names.push_back(Name);
	}


	Names=alphabaticallySort(Names);

	cout<<"after alphabetical sorting\n";
	cout<< Names;

	return 0;
}
