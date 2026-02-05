#include <iostream>
#include <string>
using namespace std;

class Book{
    private:
        string title;
        int price;

    public:
        Book(string t = "", int p = 0){
            this->title = t;
            this->price = p;
        }

        friend ostream& operator << (ostream& out, const Book &b);
        friend istream& operator >> (istream& in, Book &b);
};

ostream& operator << (ostream& out, const Book &b){
    out << "Title: " << b.title << ", Price: " << b.price << endl;
    return out;
}

istream& operator >> (istream& in, Book &b){
    getline(in, b.title);
    in >> b.price;
    in.ignore(); // To ignore the newline character after price input;

    return in;
}

int main(){
    Book b1;

    cin >> b1;
    cout << b1;
}