#include "book.h"
using namespace std;


void Book::set_name(string name) { this->name = name; }
string Book::get_name() { return this->name; }

void Book::set_rating(float rating) { this->rating = rating; }
float Book::get_rating() { return this->rating; }


void fiction_book::set_genre(string genre) { this->genre = genre; }
string fiction_book::get_genre() { return this->genre; }

void fiction_book::displayDetails() {
    cout << "\t\t\t\t\t\t\t The book name: " << get_name() << endl;
    cout << "\t\t\t\t\t\t\t The rating: " << get_rating() << endl;
    cout << "\t\t\t\t\t\t\t The genre: " << get_genre() << endl;
    cout << endl; 
}


void non_fiction_book::set_subject(string subject) { this->subject = subject; }
string non_fiction_book::get_subject() { return this->subject; }

void non_fiction_book::displayDetails() {
    cout << "\t\t\t\t\t\t\t The book name: " << get_name() << endl;
    cout << "\t\t\t\t\t\t\t The rating: " << get_rating() << endl;
    cout << "\t\t\t\t\t\t\t The subject: " << get_subject() << endl;
    cout << endl;
}