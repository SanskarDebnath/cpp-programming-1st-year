#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int count = 0;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            count++;
        }
    }

    cout << "Number of blank spaces: " << count << endl;

    return 0;
}
