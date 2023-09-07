#include <iostream>

namespace int_print {
  void print_sum(const int &a, const int &b) {
    int sum = a + b;
    std::cout << "sum: " << sum << std::endl;
  }
}

namespace float_print {
  void print_sum(const float &a, const float &b) {
    float sum = a + b;
    std::cout << "sum: " << sum << std::endl;
  }
}

int main() {
  void (*fptr)(const int &, const int &) = int_print::print_sum;
  // void (*fptr)(const float &, const float &) = float_print::print_sum;
  fptr(1.1f, 2.0f);
  return 0;
}
