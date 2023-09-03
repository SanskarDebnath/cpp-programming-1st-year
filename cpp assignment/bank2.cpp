#include<iostream>
#include<string>
using namespace std;
class bankaccount{
	string accholder = "Sanskar Debnath";
	string nameDep;
	long int accnumber = 2130401060;
	string typeofacc;
	float balance;
	float setbalance()
	{
		balance = 50000;
		return balance;
	}
	public:
	void deposit(float balance)
	{
		float number;
		cout<<"Enter the name of the depositer\n";
		cin.ignore();
		getline(cin,nameDep);
		cout<<"Enter the ammount to deposit\n";
		cin>>number;
		float balance1=balance+number;
		cout<<"The available balance is : "<<balance1<<" for "<<accnumber<<" account\n";
	}
	void withdraw(float balance)
	{
		cout<<"Enter the user choice By check or Slip\n";
		string choicestatus;
		cin.ignore();
		getline(cin, choicestatus);
		cout<<"Enter the ammount to withdraw : ";
		float number;
		cin>>number;
		if(balance>number){
		float balance1=balance-number;
		cout<<"The available balance is : "<<balance1<<" for "<<accnumber<<" account\n";
	}
	else {
		cout<<"Transiction can't be possible";
	}
	}
	void status()
	{
		cout<<"The name of the Account holder is : "<<accholder<<"\n";
		cout<<"The Account number of the account holder is : "<<accnumber<<"\n";
		cout<<"The balance of the User is : "<<setbalance()<<"\n";
		typeofacc="SAVINGS ACCOUNT";
		cout<<"Type of Account is : "<<typeofacc;
	}	
};
int main()
{
	bankaccount obj;
	cout<<"The User Account Details are :\n";
	obj.status();
	cout<<"\n";
	char choice;
	cout<<"\n\nSelect Options \n1 : Deposit\n2 : Withdraw\n";
	cin>>choice;
	switch(choice)
	{
		case '1':
			obj.deposit(obj.setbalance());
			break;
		
		case '2':
			obj.withdraw(obj.setbalance());
			break;
		default:
			cout<<"Might be Entered a wrong choice Please try again \n";
			obj.status();	
	}
	return 0;	
}
