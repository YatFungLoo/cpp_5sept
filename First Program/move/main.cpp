#include<iostream>

void Print(int &x) {
  std::cout << "int &x" << std::endl;
}

void Print(const int &x) {
  std::cout << "const int &x" << std::endl;
}

// faster way to move temp obj
void Print(int &&x) {
  std::cout << "int &&x" << std::endl;
}

int main() {
  using namespace std;
  int x;
  x = 10;

  Print(x);
  Print(4);

  return 0;
}