#include <float.h>
#include <limits.h>
#include <iostream>
#include "func.h"


int Add(int a, int b) {
    int sum = 0;
    sum = a + b;
    return sum;
}


double Add(double a, double b) {
    double sum = 0;
    sum = a + b;
    return sum;
}

void Add(int a, int b, int &result) {
    result = a + b;
}

void Factorial(int a, int &result) {
    if (a == 0) {
        result = 1;
    } else {
        int temp = a;
        a--;
        Factorial(a, result);
        result = result * temp;
    }
}

void Swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    //refrent
    int x = 10;
    //refrence
    int &ref_x = x;

    std::cout << "x = " << x << std::endl;
    std::cout << "ref_x = " << ref_x << std::endl;

    //add function
    int a = 2;
    int b = 3;
    int result = 0;
    Add(a, b, result);
    std::cout << "ref_re = " << result << std::endl;

    //factorial function
    int c = 4;
    result = 0;
    Factorial(c, result);
    std::cout << "Factorial() = " << result << std::endl;

    //swap function
    a = 4;
    b = 8;
    std::cout << "before swap() a  = " << a << " b = " << b << std::endl;
    Swap(a, b);
    std::cout << "after swap() a  = " << a << " b = " << b << std::endl;

    return 0;
}
