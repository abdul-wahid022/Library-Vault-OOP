#pragma once
#include <iostream>
#include <string>
using namespace std;

class EnhancedLibrary {
private:
    int book_id;
    int pages;
    int price;
    int student_roll_no;
    string author_name;
    string book_name;
    string student_name;
    bool is_issued;

public:
    // Constructors
    EnhancedLibrary();
    EnhancedLibrary(int id, string book, string author, int price, int pages);
    
    // Copy Constructor
    EnhancedLibrary(const EnhancedLibrary& other);
    
    // Destructor
    ~EnhancedLibrary();
    
    // Assignment operator
    EnhancedLibrary& operator=(const EnhancedLibrary& other);
    
    // Comparison operators
    bool operator==(const EnhancedLibrary& other) const;
    bool operator!=(const EnhancedLibrary& other) const;
    bool operator<(const EnhancedLibrary& other) const; 
    bool operator>(const EnhancedLibrary& other) const; 
    
    // Getters and Setters
    void set_author(string author_name);
    string get_author() const;

    void set_book(string book);
    string get_book() const;

    void set_id(int id);
    int get_id() const;

    void set_pages(int pages);
    int get_pages() const;

    void set_price(int price);
    int get_price() const;

    void set_student_name(string student_name);
    string get_student_name() const;

    void set_student_roll_no(int student_roll_no);
    int get_student_roll_no() const;
    
    void set_issued(bool issued);
    bool get_issued() const;

    void displayDetails() const;
    
    // Friend function for output
    friend ostream& operator<<(ostream& os, const EnhancedLibrary& lib);
    
    
    friend void displayBookWithDetails(const EnhancedLibrary& book);
};

// Template class for dynamic array management
template<typename T>
class DynamicArray {
private:
    T* data;
    int size;
    int capacity;

public:
    // Constructor
    DynamicArray(int initial_capacity = 10);
    
    // Destructor
    ~DynamicArray();
    
    // Copy constructor
    DynamicArray(const DynamicArray& other);
    
    
    DynamicArray& operator=(const DynamicArray& other);
    
    
    void push_back(const T& element);
    
    
    T& operator[](int index);
    const T& operator[](int index) const;
    
    // Get size
    int getSize() const;
    
    // Resize
    void resize(int new_capacity);
    
    void clear();
};


template<typename T>
void bubbleSort(T* array, int size);

template<typename T>
int binarySearch(T* array, int size, const T& target);