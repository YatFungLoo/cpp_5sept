# pragma once
class car {
  private:
    float fuel;
    float speed;
    int passengers;
  public:
    car();
    void FillFuel(float level);
    void Accelerate();
    void Break();
    void Add_People(int count);
    void Dashboard();
};