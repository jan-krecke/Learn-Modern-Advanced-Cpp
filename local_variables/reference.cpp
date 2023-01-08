#include <iostream>

void func(int &y) {  // y will be a reference to the caller's variable x
  std::cout << "Address of y is " << &y << "\n";
  y = 1;
}

int main() {
  int x = 2;
  std::cout << "Before calling func(), x = " << x << "\n";
  std::cout << "Address of x is " << &x << "\n";
  func(x);  // x will now have the value 1
  std::cout << "After calling func(), x = " << x << "\n";
}