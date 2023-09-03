#include <iostream>
using namespace std;

// This will be abstract class
// As it just has declarations and no definitions
// contains pure virtual functions
class Base
{
    public:
    // Pure virtual function created here
    virtual void display() = 0;
};

class Derived : public Base
{
    public:
    void display(){
        cout << "Inside the Derived Class\n";
    }
};
int main()
{
    // Pointer and Reference and basic derived class usage
    Derived derived1;
    Base *base;
    Derived derived2;

    derived1.display();
   
    base = &derived2;
    base->display();
    
    return 0;
}
