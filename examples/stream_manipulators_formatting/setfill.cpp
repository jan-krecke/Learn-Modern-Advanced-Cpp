#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  cout << setfill('#');
  cout << setw(15) << "Penguins " << 5 << "\n";
  cout << setw(15) << "Polar Bears " << 2 << "\n";
  cout << setfill(' ');
}