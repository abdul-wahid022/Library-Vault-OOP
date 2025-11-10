#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
bool issued;  // default = false

    string name;
    float rating;   // changed from int → float

public:
    void set_name(string name);
    string get_name();

    void set_rating(float rating);   // changed from int → float
    float get_rating();              // changed from int → float

    virtual void displayDetails() = 0; // pure virtual
};

class fiction_book : public Book {
private:
    string genre;

public:
    void set_genre(string genre);
    string get_genre();

    void displayDetails() override;
};

class non_fiction_book : public Book {
private:
    string subject;

public:
    void set_subject(string subject);
    string get_subject();

    void displayDetails() override;
};