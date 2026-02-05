#include <iostream>
using namespace std;

class Number{
    private:
        int val;

    public:
        Number(int v){
            this->val = v;
        }

        // Overloading the + operator
        Number operator - (const Number &obj) {
            return Number(this->val - obj.val);
        }

        void display() {
            cout << val<< endl;
        }
};

int main(){

    Number n1(2);
    Number n2(5);

    Number n3 = n1 - n2;
    n3.display();
}