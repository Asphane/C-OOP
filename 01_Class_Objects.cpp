#include <iostream>
using namespace std;

class Student{
    private:
        int rollNo;
        string name;
        string course;

    public:
        void setData(int rollNo, string name, string course){
            this->rollNo = rollNo;
            this->name = name;
            this->course = course;
        }

        void display(){
            cout << "-*- ----- -*-" << endl;
            cout << "Roll No: " << this->rollNo << endl;
            cout << "Name: " << this->name << endl;
            cout << "Course: " << this->course << endl;
            cout << "-*- ----- -*-" << endl;
        }
};


int main(){
    Student *s1 = new Student();
    s1->setData(18, "Titas", "Geography");
    s1->display();

    Student *s2 = new Student();
    s2->setData(14, "Bisakh", "Engineering");
    s2->display();
    return 0;
}

