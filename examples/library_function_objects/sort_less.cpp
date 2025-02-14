#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> names = {"Dilbert", "PHB",   "Dogbert", "Asok",
                          "Ted",     "Alice", "Wally"};

  cout << "Vector before sort()\n";
  for (auto name : names) cout << name << ", ";
  cout << endl << endl;

  sort(begin(names), end(names), less<string>());

  cout << "Vector after sort() with std::less\n";
  for (auto name : names) cout << name << ", ";
  cout << endl;
}