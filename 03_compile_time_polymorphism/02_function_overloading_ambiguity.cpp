#include <iostream>
using namespace std;

class Calculator {
    public:
        // Function to call integers
        void fun(int a) {
            cout << "Function with one integer parameter: " << a << endl;
        }

        // Function to call doubles
        void fun(double a) {
            cout << "Function with one double parameter: " << a << endl;
        }

        // Function to call three integers
        void fun(int a, int b, int c) {
            cout << "Function with three integer parameters: " << a << ", " << b << ", " << c << endl;
        }
};

int main(){
    Calculator *calc = new Calculator();

    calc->fun(10);        // Calls fun(int)
    calc->fun(10.5);      // Calls fun(double)
    calc->fun(1, 2, 3);   // Calls fun(int, int, int)
}