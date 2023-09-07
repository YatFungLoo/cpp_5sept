#include "car.h"
#include<iostream>
#include<vector>
struct dude
{
  std::string name;
  int age;
  float height;
};


int main() {
  car::showcount();

  car lambo;
  car x;
  car y;

  lambo.Dashboard();
  std::cout << "after" << std::endl;

  lambo.FillFuel(35);
  for (int i : {1, 2})
    lambo.Accelerate();
  lambo.Break();
  lambo.Add_People(8);
  lambo.Dashboard();

  dude guy;
  guy.name = "mario";
  std::cout << guy.name << std::endl;

  car::showcount();

  return 0;
}