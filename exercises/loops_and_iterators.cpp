#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string test_string{"This is a test string."};

  // Iterator
  std::cout << "Iterator: ";
  for (auto it = test_string.begin(); it != test_string.end(); ++it) {
    std::cout << *it;
  }
  std::cout << "\n";

  // Const Iterator
  std::cout << "Const Iterator: ";
  for (auto it = test_string.cbegin(); it != test_string.cend(); ++it) {
    std::cout << *it;
  }
  std::cout << "\n";

  // Reverse Iterator
  std::cout << "Reverse Iterator: ";
  for (auto it = test_string.rbegin(); it != test_string.rend(); ++it) {
    std::cout << *it;
  }
  std::cout << "\n";

  // Const Reverse Iterator
  std::cout << "Const Reverse Iterator: ";
  for (auto it = test_string.crbegin(); it != test_string.crend(); ++it) {
    std::cout << *it;
  }
  std::cout << "\n";

  // Global begin and end
  int test_array[] = {1, 2, 3, 4, 5};
  std::cout << "Global begin and end over array: ";
  for (auto it = std::begin(test_array); it != std::end(test_array); ++it) {
    std::cout << *it << ",";
  }
  std::cout << "\n";

  // Range for-loop over vector
  std::cout << "Range for-loop over vector: ";
  std::vector<int> test_vector = {6, 7, 8, 9, 10};
  for (auto el : test_vector) {
    std::cout << el << ",";
  }
  std::cout << "\n";

  // Add 2 to each element
  std::cout << "Add two to each element in vector: ";
  for (auto& el : test_vector) {
    el += 2;
  }
  for (auto el : test_vector) {
    std::cout << el << ",";
  }
  std::cout << "\n";

  // Remove odd elements from vector
  std::cout << "Removing odd elements from vector: ";
  for (auto it = begin(test_vector); it != end(test_vector);) {
    if (*it % 2 != 0) {
      it = test_vector.erase(it);
    } else {
      ++it;
    }
  }
  for (auto el : test_vector) {
    std::cout << el << ",";
  }
  std::cout << "\n";
}