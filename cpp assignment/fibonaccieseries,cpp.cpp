#include<iostream>
using namespace std;
int main(){
	int var;
	cout<<"\n\tEter the limit : ";
	cin>>var;
	cout<<"\n";
	int n1=0;
	cout<<"\t"<<n1;
	cout<<"\n";
	int n2=1;
	cout<<"\t"<<n2;
	cout<<"\n";
	int n3,i;
	for (i=2;i<var;i++)
	{
		n3=n1+n2;
		cout<<"\t"<<n3;
		cout<<"\n";
		n1=n2;
		n2=n3;		
	}
	return 0;
}
