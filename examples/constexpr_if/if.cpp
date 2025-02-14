#include <iostream>
#include <string>

using namespace std;

template <typename T>
string get_string(const T& arg) {
  if (std::is_same_v<std::string,
                     T>)  // Replaced by "true" if T is a string, else "false"
    return arg;           // Error if T is a built-in type
  else
    return to_string(arg);  // Error if T is std::string
}

int main() {
  int x{42};
  cout << "x: " << x << endl;
  cout << "get_string(x): " << get_string(x) << endl;
  string str{"hello"};
  cout << "str: " << str << endl;
  cout << "get_string(str): " << get_string(str) << endl;
}