#include<iostream>

class my_stack {
  int buffer[512];
  // default empty
  int top{-1};
public:
  void Push(int elem) {
    // add 1 to top counter and point to elem
    buffer[++top] = elem;
  }
  void Pop() {
    --top;
  }
  int Eval() {
    return buffer[top];
  }
  bool IsEmpty() {
    return top == -1;
  }
};

int main() {
  my_stack stack;
  stack.Push(3);
  stack.Push(4);
  stack.Push(1);
  stack.Push(8);

  while (!stack.IsEmpty()) {
    std::cout << stack.Eval() << std::endl;
    stack.Pop();
  }
  
  return 0;
}
