#include<iostream>
#include"double.h"

void cpy() {
  // shallow copy (changes to p2 will reflect to p1)
  // only copying the pointer address
  int *p1 = new int(5);
  int *p2 = p1;

  // deep copy (copy value at the address of the pointer)
  // rather than the pointer address
  int *p3 = new int(*p1);
}

int main() {
  using namespace std;
  Double ayo;
  ayo.setVal(2.0f);
  // cout << "val: " << ayo.getVal() << endl;

  Double foo(1), bar(2);
  Double sum = foo + bar;
  cout << "sum = " << sum.getVal() << endl;
  // only pre-increment can pass by reference
  ++sum;
  // sum++;
  cout << "++sum = " << sum.getVal() << endl;
  return 0;
}