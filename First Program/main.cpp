#include <float.h>
#include <limits.h>
#include <iostream>
#include "func.h"

int Add(int *a, int *b) {
    int sum = 0;
    // int a = *a;
    // int a = *a;
    sum = *a + *b;
    return sum;
}

void AddVal(int *a, int *b, int *result) {
    *result = *a + *b;
}

void Swap(int *a, int *b){
    int z = *a;
    *a = *b;
    *b = z;
}

void Factorial(int * a, int * result) {
    if (*a == 0) {
        *result = 1;
    } else {
        int temp = *a;
        *a = *a - 1;
        Factorial(a, result);
        *result = *result * temp;
    }
}

int main() {
//    int i = minus_by_val(6, 2);
//    std::cout << i << std::endl;

    int a = 6;
    int b = 8;
    int sum = 0;
    int * ptr_a = &a;
    int * ptr_b = &b;
    int * ptr_result = &sum;

    int i = Add(ptr_a, ptr_b);
    std::cout << "Add() = " << i << std::endl;

    AddVal(ptr_a, ptr_b, ptr_result);
    std::cout << "AddVal() = " << *ptr_result << std::endl;

    std::cout << "Swap() func:" << std::endl;
    std::cout << "before: " << *ptr_a << " " << *ptr_b << std::endl;
    Swap(ptr_a, ptr_b);
    std::cout << "After: " << *ptr_a << " " << *ptr_b << std::endl;

    int c = 4;
    int * ptr_c = &c;
    *ptr_result = 0;
    Factorial(ptr_c, ptr_result);
    std::cout << "Factorial() = " << *ptr_result << std::endl;

    // char buff[10];
    // std::cout << "enter buff\n" << std::endl;
    // // std::cin >> buff;
    // std::cin.getline(buff, 64, '\n');
    // std::cout << "buff = " << buff << "\n" << std::endl;
    return 0;
}
