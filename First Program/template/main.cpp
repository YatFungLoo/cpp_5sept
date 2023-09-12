#include<iostream>
#include<cstring>
#include<string>

template<typename T>
T Max(T x, T y) {
  return x > y ? x : y;
}

template<typename T>
T Add(T x, T y) {
  return x + y;
}

// explicit instantiation
template char Max(char a, char b);

// explicit specialisation (has empty <>)
template<> const char * Max<const char *>(const char *a, const char *b) {
  return strcmp(a,b) > 0 ? a : b;
}

// template<typename T>
// T ArraySum(const T *pArr, size_t arrSize) {
//   return sum;
// }

int main() {
  using namespace std;
  auto num = Max(9.0f, 5.2f);
  cout << num << endl;

  auto num2 = Add(3, 4);
  cout << num2 << endl;

  // using Max() on b and a will compare the pointer address
  // instead of the content of the pointer is pointing to.
  // ---
  // can use explicit specialisation for template fucntion
  // for specific data type, providing corrent semantics for
  // some data type.
  const char *b = { "b" };
  const char *a = { "a" };
  auto num3 = Max(a, b);
  cout << num3 << endl;

  return 0;
}