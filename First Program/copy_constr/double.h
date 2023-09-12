#pragma once
class Double {
private:
  double *member_ptr;
public:
  // constructor
  Double();
  Double(double value);
  // destructor
  ~Double();
  // member function
  double getVal()const;
  void setVal(double value); 

  Double operator +(const Double & a)const;
  // pre-increment operator
  Double & operator ++();
  // post-increment operator (only works with int)
  // Double & operator ++(double);
  // Bool operator ==(const Double & obj)const;
};
