#include <iostream>
using namespace std;

class Calculator {
    public:
        // Function to add two integers
        int add(int a, int b) {
            return a + b;
        }

        // Function to add two doubles
        double add(double a, double b) {
            return a + b;
        }

        // Function to add three integers
        int add(int a, int b, int c) {
            return a + b + c;
        }
};

int main(){
    Calculator *calc = new Calculator();

    cout << "Sum of 2 and 3 (int): " << calc->add(2, 3) << endl; // Calls add(int, int)
    cout << "Sum of 2.5 and 3.5 (double): " << calc->add(2.5, 3.5) << endl; // Calls add(double, double)
    cout << "Sum of 1, 2 and 3 (int): " << calc->add(1, 2, 3) << endl; // Calls add(int, int, int)
}