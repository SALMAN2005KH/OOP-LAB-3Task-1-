#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    Book() {
        title = "Untitled";
        author = "Anonymous";
        price = 0.0;
    }

    Book(string t, string a, double p) {
        title = t;
        author = a;
        price = p;
    }

    Book(const Book &b) {
        title = b.title;
        author = b.author;
        price = b.price;
    }

    Book(string title) {
        this->title = title;
        author = "Unknown";
        price = 0.0;
    }

    void displayInfo() {
        cout << "Book title : " << title << endl;
        cout << "Author     : " << author << endl;
        cout << "Price      : " << price << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    cout << "BOOK 1 info :-" << endl;
    Book b1;
    b1.displayInfo();

    cout << "BOOK 2 info :-" << endl;
    Book b2("Harry Potter", "JK Rowling", 250.0);
    b2.displayInfo();

    cout << "BOOK 3 info :-" << endl;
    Book b3(b2);
    b3.displayInfo();

    cout << "BOOK 4 info :-" << endl;
    Book b4("Atomic Habits");
    b4.displayInfo();

    return 0;
}
