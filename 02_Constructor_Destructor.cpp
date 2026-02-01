#include <iostream>
using namespace std;

class Book{
    private:
        string title;
        string author;
        double price;

    public:
        Book(){ // default constructor
            cout << "Default Constructor Called" << endl;
        }

        Book(string title, string author, double price){ // parameterized constructor
            this->title = title;
            this->author = author;
            this->price = price;
            cout << "Parameterized Constructor Called" << endl;
        }

        Book (Book &b){ // deep copy
            this->title = b.title;
            this->author = b.author;
            this->price = b.price;
            cout << " Deep Copy Constructor Called" << endl;

        }

        void setBook(string title, string author, double price){
            this->title = title;
            this->author = author;
            this->price = price;
        }

        void display(){
            cout << "-*- ----- -*-" << endl;
            cout << "Title: " << this->title << endl;
            cout << "Author: " << this->author << endl;
            cout << "Price: " << this->price << endl;
            cout << "-*- ----- -*-" << endl;
        }

        ~Book(){
            cout << "Destructor Called for Book: " << this->title << endl;
        }
};

int main(){
    Book *b1 = new Book("C++ Programming", "Andrew NG", 1200.50);
    Book *b2 = new Book(*b1); // shallow copy using copy constructor

    cout << "Before Modification:" << endl;
    b1->display();
    b2->display();

    b1->setBook("Data Structures", "Robert Lafore", 1500.75);
    cout << endl;

    cout << "After Modification:" << endl;
    b1->display();
    b2->display();


    delete b1;
    delete b2;

    return 0;
}