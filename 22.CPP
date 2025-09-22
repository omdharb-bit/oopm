#include <iostream>
using namespace std;

class Car
{
public:
  void accelerate()
  {
    cout << "Car is accelerated";
  }
  void stop()
  {
    cout << "Car is stopped";
  };
  class Driver
  {
public:
    void control_car(Car &car, string s)
    {
      if (s == "accelerate")
        car.accelerate();
      else if (s == "stop")
        car.stop();
      else
        cout << "Invalid message";
    }
  };
  int main()
  {
    Driver d;
    Car c;
    d.control_car(c, "accelerate");
    d.control_car(c, "stop");
    
  }
};
