#include <iostream>

void mem_melloc () {
  int *ptr = (int*)malloc(10 * sizeof(int));
  *ptr = 5;
  printf("*ptr = %d\n", *ptr);
  free(ptr);
}

int main() {
  std::cout << "hello" << std::endl;
  mem_melloc();
  return 0;
}