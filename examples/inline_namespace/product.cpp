#include <iostream>
#include <string>

namespace product {
#include "version1.h"
#include "version2.h"

void test() {
  refrigerator fridge;
  fridge.print();
}
}  // namespace product

int main() { product::test(); }
