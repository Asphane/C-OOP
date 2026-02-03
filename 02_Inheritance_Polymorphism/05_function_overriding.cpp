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
    void start() {
        cout << "car starting" << endl;
    }
};

class Bike : public Vehicle {
    public:
    void start() {
        cout << "bike starting" << endl;
    }
};

int main(){
    Vehicle v;
    Car c;
    Bike b;

    v.start();
    cout << "------------------------" << endl;
    
    c.start();
    cout << "------------------------" << endl;

    b.start();
    cout << "------------------------" << endl;

    return 0;
}