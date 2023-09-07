# pragma once
class car {
  private:
    float fuel{ 0 };
    float speed{ 0 };
    int passengers{ 0 };
    static int car_count;
  public:
    car();
    ~car();
    void FillFuel(int level);
    void Accelerate();
    void Break();
    void Add_People(int count);
    void Dashboard()const;
    static void showcount();
};