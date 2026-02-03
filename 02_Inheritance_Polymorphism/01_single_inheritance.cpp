#include <iostream>
using namespace std;

class Person {
    protected:
        string name;
        int age;

    public:
        Person(string name, int age) : name(name), age(age) {}

        void display(){
            cout << "Name: " << name << endl <<"Age: " << age << endl;
        }
};

class Student : public Person {
    private:
        int roll;

    public:
        Student(string name, int age, int roll) : Person(name, age), roll(roll) {}

        void displayStudent(){
            display(); // Call base class display
            cout << "Student Roll: " << roll << endl;
        }
};

int main(){
    Student s1("Alice", 20, 101);
    s1.displayStudent();
    return 0;
}