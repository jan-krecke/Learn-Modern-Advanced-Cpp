#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void print_vec(const vector<int>& vec) {
  for (auto v : vec) cout << v << ", ";
  cout << endl;
}

int main() {
  vector<int> vec{3, 4, 1, 5, 9};

  cout << "vec: ";
  print_vec(vec);

  auto is_odd = [](int n) { return n % 2 == 1; };
  auto is_even = [](int n) { return n % 2 == 0; };

  if (all_of(cbegin(vec), cend(vec), is_odd))
    cout << "All elements of vec are odd\n";
  if (all_of(cbegin(vec), cend(vec), is_even))
    cout << "All elements of vec are even\n";
  if (any_of(cbegin(vec), cend(vec), is_odd))
    cout << "Some elements of vec are odd\n";
  if (any_of(cbegin(vec), cend(vec), is_even))
    cout << "Some elements of vec are even\n";
  if (none_of(cbegin(vec), cend(vec), is_odd))
    cout << "No elements of vec are odd\n";
  if (none_of(cbegin(vec), cend(vec), is_even))
    cout << "No elements of vec are even\n";
}
