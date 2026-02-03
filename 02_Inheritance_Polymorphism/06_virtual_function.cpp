#include <iostream>
using namespace std;

class Vehicle {
   public:
    virtual void start() {
        cout << "vehicle starting" << endl;
    }
};

class Car : public Vehicle {
    public:
    void start () override {
        cout << "car starting" << endl;
    }
};

class Bike : public Vehicle {
    public:
    void start () override{
        cout << "bike starting" << endl;
    }
};

int main(){
    Vehicle *v1 = new Car();
    Vehicle *v2 = new Bike();
    Vehicle *v3 = new Vehicle();
    // Car c;
    // Bike b;

    v1 -> start();
    cout << "------------------------" << endl;
    
    v2 -> start();
    cout << "------------------------" << endl;

    v3 -> start();
    cout << "------------------------" << endl;

    return 0;
}