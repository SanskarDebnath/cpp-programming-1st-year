#include <iostream>
using namespace std;
class first{
	public:
		int a=40;
};
class second : public first{
	public:
		int b=50;
};
class third : public second{
	public:
		int c=a+b;
};
int main()
{
	third sanskar;
	cout<<"total is : "<<sanskar.c;
}
