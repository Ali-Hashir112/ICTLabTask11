#include <iostream>
#include <string>
using namespace std;

class LibraryBook {
private:
    int availableCopies;

public:
    string title;
    string author;
    long ISBN;

    void setCopies(int copies) {
        availableCopies = copies;
    }

    int getCopies() {
        return availableCopies;
    }

    void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Available Copies: " << availableCopies << endl;
    }
};

int main() {
    LibraryBook book;
    int copies;

    cout << "Enter title: ";
    getline(cin, book.title);

    cout << "Enter author: ";
    getline(cin, book.author);

    cout << "Enter ISBN: ";
    cin >> book.ISBN;

    cout << "Enter available copies: ";
    cin >> copies;

    book.setCopies(copies);
    book.displayDetails();

    return 0;
}