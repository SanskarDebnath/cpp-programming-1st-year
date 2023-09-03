#include <iostream>
using namespace std;

class NumberA;  // Forward declaration of class NumberA

class NumberB {
private:
    float number;

public:
    NumberB(float value) {
        number = value;
    }

    float getNumber() {
        return number;
    }

    friend float addNumbers(NumberA objA, NumberB objB);
};

class NumberA {
private:
    int number;

public:
    NumberA(int value) {
        number = value;
    }

    int getNumber() {
        return number;
    }

    friend float addNumbers(NumberA objA, NumberB objB);
};

float addNumbers(NumberA objA, NumberB objB) {
    return objA.number + objB.number;
}

int main() {
    NumberA a(5);
    NumberB b(3.14);

    float result = addNumbers(a, b);

    cout << "Sum of Numbers: " << result << endl;

    return 0;
}

