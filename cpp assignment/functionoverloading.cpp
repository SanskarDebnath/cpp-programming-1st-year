#include<iostream>
using namespace std;
class complex{
	float x,y;
	public:
		complex()//default constructor
		{
			x=y=0;
		}
		complex (float a)
		{
			x=y=a;
		}
		complex(float real, float imag)
		{
			x=real;
			y=imag;
			
		}
		friend complex sum(complex,complex);
		friend void display(complex);
};
complex sum(complex c1, complex c2)
{
	complex c3;
	c3.x=c1.x+c2.x;
	c3.y=c1.y+c2.y;
	return c3;
}
void display(complex c){
	cout<<c.x<<"+ ("<<c.y<<")i"<<"\n";
}
int main()
{
	complex a(2.7, 3.5);
	complex b(1.6),c;
	c=sum(a,b);
	
	cout<<"A=";display(a);
	cout<<"B=";display(b);
	cout<<"C=";display(c);
	return 0;

	
}
