#include <iostream>
using namespace std;

class Vehicle {
   public:
    void start() {
        cout << "vehicle starting" << endl;
    }
};

class Car : public Vehicle {
    public:
    void drive() {
        cout << "car driving" << endl;
    }
};

class Bike : public Vehicle {
    public:
    void ride() {
        cout << "bike riding" << endl;
    }
};

int main(){
    Vehicle v;
    Car c;
    Bike b;

    v.start();
    cout << "------------------------" << endl;
    c.start();
    c.drive();

    b.start();
    b.ride();
    return 0;
}