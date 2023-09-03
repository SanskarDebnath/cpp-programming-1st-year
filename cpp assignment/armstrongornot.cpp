#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int num,temp,sum=0;
	int temp2;	
	cout<<"\n\n\n\n\t\tEnter the number to check weather it is a pelindrome or not? : ";
	cin>>num;
	temp2=num;
	while(num!=0)
	{
		temp=num%10;
		sum=sum+pow(temp,3);
		num=num/10;
	}
	if(temp2==sum){
		cout<<"\n\n\n\n\t\tThe number is an armstrong number";
	}
	else{
		cout<<"\n\n\n\n\t\tThe number is not an armstrong number";
	}
	
}
