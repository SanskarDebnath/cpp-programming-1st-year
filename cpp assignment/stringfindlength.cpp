#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string firstname;
    cout<<"\n\nEnter the String here : \n";
    getline(cin, firstname);
    cout<<"\n\nThe string is : \n\n";
    cout << firstname << endl;
    
    firstname.erase(remove(firstname.begin(), firstname.end(), ' '), firstname.end());//important line
    int length = firstname.length();
    cout << "\n\nLength of the string without spaces: " << length << endl;
    return 0;
}
