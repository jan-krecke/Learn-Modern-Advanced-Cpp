#include <iostream>
#include <string>

void replace_punctuation(std::string& input_string) {
  for (auto& c : input_string) {
    if (ispunct(c)) {
      c = '!';
    }
  }
}

int main() {
  std::string test_string{"To be, or not to be, that is the question:"};

  std::cout << "Before: \n\t" << test_string << "\n";

  replace_punctuation(test_string);

  std::cout << "After: \n\t" << test_string << std::endl;
}