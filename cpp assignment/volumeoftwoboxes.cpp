#include<iostream>
using namespace std;
class box{
	public:
		double l1;
		double b1;
		double h1;
		double l2;
		double b2;
		double h2;	
	int box1case1(double l1,double b1, double h1){
		double volume = l1*b1*h1;
		cout<<"The volume of the BOX 1 is : "<<volume;
	}
	int box2case2(double l2, double b2, double h2){
		double voulme2=0;
		double volume2=l2*b2*h2;
		cout<<"\nThe volume of the BOX 2 is : "<<volume2;
	}
	int box1and2case3(double l1,double b1, double h1,double l2, double b2, double h2){
		double volume3=l1*b1*h1;
		double volume4=l2*b2*h2;
		cout<<"\nThe volume for the Box 1 is : \n"<<volume3;
		cout<<"\nThe volume for the Box 2 is : \n"<<volume4;
		double result=volume3+volume4;
		cout<<"\nThe total volume for the Box 1 and Box 2 is : "<<result;
	}
};
int main(){
	box obj;
	int num,r,k;
	cout<<"\n\n\nenter the box number (e.g for 1 is box 1 and 2 for box 2 and 3 for box3)";
	cin>>num;
	switch(num){
		case 1:
			cout<<"enter the length for BOX 1\n";
			cin>>obj.l1;
			cout<<"enter the bredth for BOX 1\n";
			cin>>obj.b1;
			cout<<"enter the height for BOX 1\n";
			cin>>obj.h1;
			r=obj.box1case1(obj.l1,obj.b1,obj.h1);
			break;
		case 2:
			cout<<"enter the length for BOX 2\n";
			cin>>obj.l2;
			cout<<"enter the bredth for BOX 2\n";
			cin>>obj.b2;
			cout<<"enter the height for BOX 2\n";
			cin>>obj.h2;
			k=obj.box2case2(obj.l2,obj.b2,obj.h2);
			break;
		case 3:
			cout<<"Enter the length, breadth and height for Box 1:\n";
			cout<<"enter the length for BOX 1\n";
			cin>>obj.l1;
			cout<<"enter the bredth for BOX 1\n";
			cin>>obj.b1;
			cout<<"enter the height for BOX 1\n";
			cin>>obj.h1;
			cout<<"Enter the length, breadth and height for Box 2:\n";
			cout<<"enter the length for BOX 2\n";
			cin>>obj.l2;
			cout<<"enter the bredth for BOX 2\n";
			cin>>obj.b2;
			cout<<"enter the height for BOX 2\n";
			cin>>obj.h2;
			r=obj.box1and2case3(obj.l1,obj.b1,obj.h1,obj.l2,obj.b2,obj.h2);
			break;
	}
	
}
