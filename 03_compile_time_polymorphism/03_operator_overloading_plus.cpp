#include <iostream>
using namespace std;

class Complex{
    private:
        float real;
        float imag;

    public:
        Complex(): real(0), imag(0) {}
        Complex(float r, float i): real(r), imag(i) {}

        // Overloading the + operator
        Complex operator + (const Complex &obj) {
            Complex temp;
            temp.real = real + obj.real;
            temp.imag = imag + obj.imag;
            return temp;
        }

        void display() {
            cout << real << " + " << imag << "i" << endl;
        }
};

int main(){

    Complex c1(2, 4);
    Complex c2(5.2, 8.6);

    Complex c3 = c1 + c2;
    c3.display();
}