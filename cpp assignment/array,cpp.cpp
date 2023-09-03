#include <iostream>
using namespace std;

int main() {
  const int SIZE = 10;
  int arr[SIZE];
  cout << "\n\n\n\n\t\t\tEnter " << SIZE << " integers: " << endl;
  for (int i = 0; i < SIZE; i++) {
  	cout<<"\t";
    cin >> arr[i];
  }
  cout << "\tIntegers in forward direction: ";
  for (int i = 0; i < SIZE; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n\tIntegers in reverse direction: ";
  for (int i = SIZE - 1; i >= 0; i--) {
    cout << arr[i] << " ";
  }
  return 0;
}
