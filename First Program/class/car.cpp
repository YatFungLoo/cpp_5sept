#include "car.h"
#include <iostream>

car::car()
{
  fuel = 0;
  speed = 0;
  passengers = 0;
}

void car::FillFuel(float level)
{
  fuel = level;
}

void car::Accelerate()
{
  speed++;
  fuel =- 0.5f;
}

void car::Break()
{
  speed = 0;
}

void car::Add_People(int count)
{
  passengers = count;
}

void car::Dashboard()
{
  using namespace std;
  cout << "Fuel: " << fuel << endl;
  cout << "Speed: " << speed << endl;
  cout << "Passengers: " << passengers << endl;
}
