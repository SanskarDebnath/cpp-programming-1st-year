#include<iostream>
using namespace std;
class rect{
	int l;
	int w;
	public:
		//default constructor
		area()
		{
			l=10;
			w=20;
		}
		//parameterized constructor
		area(int a, int b){
			l=a;
			w=b;
		}
		
		//copy
		
		area(const area& abc)
		{
			l=abc.l;
			w=abc.b;
		}
		int show_details()
		{
			return l*w;
		}
};
int main()
{
	area obj1;
	area obj2(10,20);
	area obj3(obj2);
	
	cout<<obj1.show_details();
	cout<<obj2.show_details();
	cout<<obj3.show_details();
	
}
