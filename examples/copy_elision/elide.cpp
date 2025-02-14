#include <iostream>

using namespace std;

class Test {
 public:
  Test() { cout << "Default constructor\n"; }
  Test(const Test& other) {
    cout << "Copying\n";
  }  // Copy constructor with side effect
};

// Function returning a temporary object
Test func() { return Test(); }

int main() {
  cout << "Calling func()" << endl;
  Test test = func();  // How many times is "Copying" printed out?
  cout << "Returned from func()" << endl;
}
