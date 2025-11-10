#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string email;
    string password;
    int roll_no;
    string subscription_type;
    bool is_active;

public:
    // Constructors
    Student();
    Student(string name, string email, string password, int roll_no, string subscription = "Basic");
    
    // Copy Constructor
    Student(const Student& other);
    
    // Destructor
    ~Student();
    
    // Getters and Setters
    void set_name(string name);
    string get_name() const;
    
    void set_email(string email);
    string get_email() const;
    
    void set_password(string password);
    string get_password() const;
    
    void set_roll_no(int roll_no);
    int get_roll_no() const;
    
    void set_subscription(string subscription);
    string get_subscription() const;
    
    void set_active(bool active);
    bool is_student_active() const;
    
    // Operator overloading
    bool operator==(const Student& other) const;
    bool operator!=(const Student& other) const;
    Student& operator=(const Student& other);
    
    // Friend function for output
    friend ostream& operator<<(ostream& os, const Student& student);
    
    // Display function
    void displayDetails() const;
};


bool searchStudentByName(Student* array, int size, const string& name);
int findStudentByRollNo(Student* array, int size, int roll_no);
int findLibraryBookById(class EnhancedLibrary* array, int size, int id);