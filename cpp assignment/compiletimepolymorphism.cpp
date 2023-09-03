#include <iostream>
using namespace std;
class mf {
public:
	void func(int x)
	{
		cout << "value of x is " << x << endl;
	}
	void func(double x)
	{
		cout << "value of x is " << x << endl;
	}
	void func(int x, int y)
	{
		cout << "value of x and y is " << x << ", " << y
			<< endl;
	}
};
int main()
{
	mf sanskar;
	sanskar.func(7);
	sanskar.func(9.132);
	sanskar.func(8, 6);
	return 0;
}
