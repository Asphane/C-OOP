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
        bool operator == (const Number &obj) {
            return (this->val == obj.val);
        }
};

int main(){

    Number n1(2);
    Number n2(5);

    if(n1 == n2){
        cout << "n1 is equal to n2" << endl;
    } else {
        cout << "n1 is not equal to n2" << endl;
    }

    cout << "-----" << endl;

    Number n3(4);
    Number n4(4);

    if(n3 == n4){
        cout << "n3 is equal to n4" << endl;
    } else {
        cout << "n3 is not equal to n4" << endl;
    }
}