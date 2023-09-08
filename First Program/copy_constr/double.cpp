#include "double.h"

// delegating constructors
Double::Double():Double( 0 )
{
  // member_ptr = new double( 0 );
}

Double::Double(double val)
{
  member_ptr = new double( val );
}

Double::~Double()
{
  delete member_ptr;
}

double Double::getVal() const
{
  return *member_ptr;
}

void Double::setVal(double value)
{
  *member_ptr = value;
}

Double Double::operator+(const Double &a) const
{
  Double temp;
  *temp.member_ptr = *member_ptr + *a.member_ptr;
  return temp;
}

// pre-increment
Double & Double::operator++()
{
  // increment the value
  ++(*member_ptr);
  // return the current object (l-value, return by reference)
  return (*this);
}

// // post-increment (only works with int)
// Double Double::operator++(double)
// {
  // // create temp
  // Double tmp(*this);
  // ++(*member_ptr);
  // return tmp;
// }
// 