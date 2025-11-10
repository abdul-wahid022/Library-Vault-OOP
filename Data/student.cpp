#include "student.h"
using namespace std;

// Default Constructor
Student::Student() {
    name = "";
    email = "";
    password = "";
    roll_no = 0;
    subscription_type = "Basic";
    is_active = true;
}

// Parameterized Constructor
Student::Student(string name, string email, string password, int roll_no, string subscription) {
    this->name = name;
    this->email = email;
    this->password = password;
    this->roll_no = roll_no;
    this->subscription_type = subscription;
    this->is_active = true;
}

// Copy Constructor
Student::Student(const Student& other) {
    name = other.name;
    email = other.email;
    password = other.password;
    roll_no = other.roll_no;
    subscription_type = other.subscription_type;
    is_active = other.is_active;
}

// Destructor
Student::~Student() {
    // Clean up if needed (currently no dynamic memory in this class)
}

// Getters and Setters
void Student::set_name(string name) { this->name = name; }
string Student::get_name() const { return this->name; }

void Student::set_email(string email) { this->email = email; }
string Student::get_email() const { return this->email; }

void Student::set_password(string password) { this->password = password; }
string Student::get_password() const { return this->password; }

void Student::set_roll_no(int roll_no) { this->roll_no = roll_no; }
int Student::get_roll_no() const { return this->roll_no; }

void Student::set_subscription(string subscription) { this->subscription_type = subscription; }
string Student::get_subscription() const { return this->subscription_type; }

void Student::set_active(bool active) { this->is_active = active; }
bool Student::is_student_active() const { return this->is_active; }

// Operator overloading
bool Student::operator==(const Student& other) const {
    return (email == other.email && roll_no == other.roll_no);
}

bool Student::operator!=(const Student& other) const {
    return !(*this == other);
}

Student& Student::operator=(const Student& other) {
    if (this != &other) {
        name = other.name;
        email = other.email;
        password = other.password;
        roll_no = other.roll_no;
        subscription_type = other.subscription_type;
        is_active = other.is_active;
    }
    return *this;
}

// Friend function for output operator
ostream& operator<<(ostream& os, const Student& student) {
    os << "\t\t\t\t\t\t\t Name: " << student.name << endl;
    os << "\t\t\t\t\t\t\t Email: " << student.email << endl;
    os << "\t\t\t\t\t\t\t Roll No: " << student.roll_no << endl;
    os << "\t\t\t\t\t\t\t Subscription: " << student.subscription_type << endl;
    os << "\t\t\t\t\t\t\t Status: " << (student.is_active ? "Active" : "Inactive") << endl;
    return os;
}

void Student::displayDetails() const {
    cout << *this;
}

// Specialized search functions for students
bool searchStudentByName(Student* array, int size, const string& name) {
    for (int i = 0; i < size; i++) {
        if (array[i].get_name() == name) {
            return true;
        }
    }
    return false;
}

int findStudentByRollNo(Student* array, int size, int roll_no) {
    for (int i = 0; i < size; i++) {
        if (array[i].get_roll_no() == roll_no) {
            return i;
        }
    }
    return -1;
}