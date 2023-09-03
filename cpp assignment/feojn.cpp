// C++ program demonstrating ambiguity in Multipath
// Inheritance

#include <iostream>
using namespace std;

class ClassA {
public:
	int a;
};

class ClassB : public ClassA {
public:
	int b;
};

class ClassC : public ClassA {
public:
	int c;
};

class ClassD : public ClassB, public ClassC {
public:
	int d;
};

int main()
{
	ClassD obj;

	// obj.a = 10;				 // Statement 1, Error
	// obj.a = 100;				 // Statement 2, Error

	obj.ClassB::a = 10; // Statement 3
	obj.ClassC::a = 100; // Statement 4

	obj.b = 20;
	obj.c = 30;
	obj.d = 40;

	cout << " a from ClassB : " << obj.ClassB::a;
	cout << "\n a from ClassC : " << obj.ClassC::a;

	cout << "\n b : " << obj.b;
	cout << "\n c : " << obj.c;
	cout << "\n d : " << obj.d << '\n';
}

