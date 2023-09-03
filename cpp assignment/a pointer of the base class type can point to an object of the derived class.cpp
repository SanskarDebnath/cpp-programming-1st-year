#include <iostream>
using namespace std;
class Base
{
    public:
        void fun1()
        {
            cout << "fun1 of Base Class" << endl;
        }
        void fun2()
        {
            cout << "fun2 of Base Class" << endl;
        }
        void fun3()
        {
            cout << "fun3 of Base Class" << endl;
        }
};
class Derived:public Base
{
    public:
        void fun4()
        {
            cout << "fun4 of Derived Class" << endl;
        }
        void fun5()
        {
            cout << "fun5 of Derived Class" << endl;
        }
};
int main()
{
    Base *p;
    p = new Derived ();
    p->fun1 ();
    p->fun2 ();
    p->fun3 ();
}
