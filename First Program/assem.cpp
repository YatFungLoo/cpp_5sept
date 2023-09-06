#include <iostream>

inline int Square(int i) {
    return i * i;
}

int main() {
    using namespace std;
    int i = 5;
    int result = Square(i);
    cout << result << endl;
    return 0;
}
