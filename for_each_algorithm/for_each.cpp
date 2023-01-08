#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Print each character in str on a separate line
  string str{"A test string"};

  cout << "With for_each: ";
  for_each(cbegin(str), cend(str), [](const char c) { cout << c << ", "; });

  // Range for loop
  cout << "\nWith range for loop: ";
  for (auto c : str) cout << c << ", ";
  cout << endl;
}