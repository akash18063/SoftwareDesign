#include <iostream>
#include <exception>
using namespace std;

class Vehicle
{
  public:
    Vehicle(int id, string numberPlate)
    {
      m_id = id;
      m_numberPlate = numberPlate;
    }
    virtual int numTyres() = 0;
    int getId() { return m_id; }
    string getNumberPlate() {return m_numberPlate;}
  protected:
    int m_id;
    string m_numberPlate;
};


class Car : public Vehicle
{
  public:
    Car(int id, string numberPlate) : Vehicle(id, numberPlate)
    {
      
    }
    int numTyres() {return 4;}
};

class Bike : public Vehicle
{
  public:
    Bike(int id, string numberPlate) : Vehicle(id, numberPlate)
    {
      
    }
    int numTyres() {return 2;}
};

int main() {
    Vehicle *v0 = new Car(1, "asdf7");
    Vehicle *v1 = new Bike(2, "wret4");
    cout<< v0->numTyres() << endl;
    Car *c = dynamic_cast<Car*>(v0);
    if(c == nullptr)
    {
      cout << "not a car" << endl;
    }
    else{
      cout << "is a car" << endl;
    }
  Vehicle *v2 = new Vehicle(3, "adfaf5");
}