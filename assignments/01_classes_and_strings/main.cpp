#include <iostream>

#include "url.hpp"

int main() {
  URL url("http", "example.com/index.html");
  std::cout << url.display()
            << std::endl;  // prints "http://example.com/index.html"
}
