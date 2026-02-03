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

class clgStudent : public Student{
    private:
        string clg_name;

    public:
        clgStudent(string name, int age, int roll, string clg_name) 
            : Student(name, age, roll), clg_name(clg_name) {}

        void displayClgStudent(){
            displayStudent(); // Call Student class display
            cout << "College Name: " << clg_name << endl;
        }
};

int main(){
    Student s1("Alice", 20, 101);
    s1.displayStudent();
    cout << "------------------------" << endl;

    clgStudent s2("Bob", 21, 102, "XYZ University");
    s2.displayClgStudent();
    return 0;
}