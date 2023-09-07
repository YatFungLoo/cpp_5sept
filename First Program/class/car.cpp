#include "car.h"
#include <iostream>

// static
int car::car_count = 0;

car::car()
{
  ++car_count;
  // fuel = 10;
  // speed = 0;
  // passengers = 0;
}

car::~car()
{
  --car_count;
}

void car::FillFuel(int level)
{
  fuel = level;
}

void car::Accelerate()
{
  ++speed;
  fuel -= 0.5f;
}

void car::Break()
{
  --speed;
}

void car::Add_People(int count)
{
  passengers = count;
}

// member function that does not modifiy the state of the object
// should take advantage of the const keyword
void car::Dashboard ()const
{
  using namespace std;
  cout << "Fuel: " << fuel << endl;
  cout << "Speed: " << speed << endl;
  cout << "Passengers: " << passengers << endl;
}

void car::showcount()
{
  using namespace std;
  cout << "Car counts: " << car_count << endl;
}
