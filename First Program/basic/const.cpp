#include <float.h>
#include <limits.h>
#include <iostream>

int main() {
    int x = 5 ;
    const int MAX = 12 ;
    int &ref_x1 = x ;
    const int &ref_x2 = x ;
    //Try to modify the pointer (e.g. ptr1) and the pointee value (e.g. *ptr1)
    const int *ptr1 = &x ;
    int *const ptr2 = &x ;

    /*
       ptr1 = 2;
       ptr2 = 2;

     *ptr1 = 2;
     *ptr2 = 2;
     */

    //Find which declarations are valid. If invalid, correct the declaration
    const int *ptr3 = &MAX ;
    const int *ptr4 = &MAX ;

    const int &r1 = ref_x1 ;
    const int &r2 = ref_x2 ;

    int *&p_ref1 = ptr1 ;
    const int*&p_ref2 = ptr2 ;

    return 0;
}

/*
 //Try to modify x1 & x2 and see the compilation output
int x = 5 ;
const int MAX = 12 ;
int &ref_x1 = x ;
const int &ref_x2 = x ;
 
//Try to modify the pointer (e.g. ptr1) and the pointee value (e.g. *ptr1)
const int *ptr1 = &x ;
int *const ptr2 = &x ;
const int * const ptr3 = &x ;
 
//Find which declarations are valid. If invalid, correct the declaration
const int *ptr3 = &MAX ;
int *ptr4 = &MAX ;
 
const int &r1 = ref_x1 ;
int &r2 = ref_x2 ;
 
int *&p_ref1 = ptr1 ;
const int*&p_ref2 = ptr2 ;
*/
