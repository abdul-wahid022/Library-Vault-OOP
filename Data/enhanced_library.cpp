#include "enhanced_library.h"
#include <algorithm>
using namespace std;

// Default Constructor
EnhancedLibrary::EnhancedLibrary() {
    book_id = 0;
    pages = 0;
    price = 0;
    student_roll_no = 0;
    author_name = "";
    book_name = "";
    student_name = "NULL";
    is_issued = false;
}

// Parameterized Constructor
EnhancedLibrary::EnhancedLibrary(int id, string book, string author, int price, int pages) {
    this->book_id = id;
    this->book_name = book;
    this->author_name = author;
    this->price = price;
    this->pages = pages;
    this->student_name = "NULL";
    this->student_roll_no = 0;
    this->is_issued = false;
}

// Copy Constructor
EnhancedLibrary::EnhancedLibrary(const EnhancedLibrary& other) {
    book_id = other.book_id;
    pages = other.pages;
    price = other.price;
    student_roll_no = other.student_roll_no;
    author_name = other.author_name;
    book_name = other.book_name;
    student_name = other.student_name;
    is_issued = other.is_issued;
}

// Destructor
EnhancedLibrary::~EnhancedLibrary() {
   
}

// Assignment operator
EnhancedLibrary& EnhancedLibrary::operator=(const EnhancedLibrary& other) {
    if (this != &other) {
        book_id = other.book_id;
        pages = other.pages;
        price = other.price;
        student_roll_no = other.student_roll_no;
        author_name = other.author_name;
        book_name = other.book_name;
        student_name = other.student_name;
        is_issued = other.is_issued;
    }
    return *this;
}

// Comparison operators
bool EnhancedLibrary::operator==(const EnhancedLibrary& other) const {
    return (book_id == other.book_id && book_name == other.book_name);
}

bool EnhancedLibrary::operator!=(const EnhancedLibrary& other) const {
    return !(*this == other);
}

bool EnhancedLibrary::operator<(const EnhancedLibrary& other) const {
    return price < other.price;
}

bool EnhancedLibrary::operator>(const EnhancedLibrary& other) const {
    return price > other.price;
}

// Getters and Setters
void EnhancedLibrary::set_id(int id) { this->book_id = id; }
int EnhancedLibrary::get_id() const { return this->book_id; }

void EnhancedLibrary::set_book(string book) { this->book_name = book; }
string EnhancedLibrary::get_book() const { return this->book_name; }

void EnhancedLibrary::set_author(string author_name) { this->author_name = author_name; }
string EnhancedLibrary::get_author() const { return this->author_name; }

void EnhancedLibrary::set_price(int price) { this->price = price; }
int EnhancedLibrary::get_price() const { return this->price; }

void EnhancedLibrary::set_pages(int pages) { this->pages = pages; }
int EnhancedLibrary::get_pages() const { return this->pages; }

void EnhancedLibrary::set_student_name(string student_name) { this->student_name = student_name; }
string EnhancedLibrary::get_student_name() const { return this->student_name; }

void EnhancedLibrary::set_student_roll_no(int student_roll_no) { this->student_roll_no = student_roll_no; }
int EnhancedLibrary::get_student_roll_no() const { return this->student_roll_no; }

void EnhancedLibrary::set_issued(bool issued) { this->is_issued = issued; }
bool EnhancedLibrary::get_issued() const { return this->is_issued; }

void EnhancedLibrary::displayDetails() const {
    cout << *this;
}

// Friend function for output operator
ostream& operator<<(ostream& os, const EnhancedLibrary& lib) {
    os << "\t\t\t\t\t\t\t The book id: " << lib.book_id << endl;
    os << "\t\t\t\t\t\t\t The book name: " << lib.book_name << endl;
    os << "\t\t\t\t\t\t\t The author name: " << lib.author_name << endl;
    os << "\t\t\t\t\t\t\t The price of the book: " << lib.price << endl;
    os << "\t\t\t\t\t\t\t The number of pages in the book: " << lib.pages << endl;

    if (lib.student_name != "NULL") {
        os << "\t\t\t\t\t\t\t The student name: " << lib.student_name << endl;
        os << "\t\t\t\t\t\t\t The Student Roll No.: " << lib.student_roll_no << endl;
    } else {
        os << "\t\t\t\t\t\t\t No student has issued this book." << endl;
    }
    return os;
}

// Friend function for enhanced display
void displayBookWithDetails(const EnhancedLibrary& book) {
    cout << "\n\t\t\t\t\t\t\t--------------------------------------\n";
    cout << book;
}

// Template class implementations
template<typename T>
DynamicArray<T>::DynamicArray(int initial_capacity) {
    capacity = initial_capacity;
    size = 0;
    data = new T[capacity];
}

template<typename T>
DynamicArray<T>::~DynamicArray() {
    delete[] data;
}

template<typename T>
DynamicArray<T>::DynamicArray(const DynamicArray& other) {
    capacity = other.capacity;
    size = other.size;
    data = new T[capacity];
    for (int i = 0; i < size; i++) {
        data[i] = other.data[i];
    }
}

template<typename T>
DynamicArray<T>& DynamicArray<T>::operator=(const DynamicArray& other) {
    if (this != &other) {
        delete[] data;
        capacity = other.capacity;
        size = other.size;
        data = new T[capacity];
        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];
        }
    }
    return *this;
}

template<typename T>
void DynamicArray<T>::push_back(const T& element) {
    if (size >= capacity) {
        resize(capacity * 2);
    }
    data[size++] = element;
}

template<typename T>
T& DynamicArray<T>::operator[](int index) {
    return data[index];
}

template<typename T>
const T& DynamicArray<T>::operator[](int index) const {
    return data[index];
}

template<typename T>
int DynamicArray<T>::getSize() const {
    return size;
}

template<typename T>
void DynamicArray<T>::resize(int new_capacity) {
    T* new_data = new T[new_capacity];
    for (int i = 0; i < size; i++) {
        new_data[i] = data[i];
    }
    delete[] data;
    data = new_data;
    capacity = new_capacity;
}

template<typename T>
void DynamicArray<T>::clear() {
    size = 0;
}

// Template function for sorting
template<typename T>
void bubbleSort(T* array, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                T temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}


template<typename T>
int binarySearch(T* array, int size, const T& target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (array[mid] == target) {
            return mid;
        }
        if (array[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

template class DynamicArray<EnhancedLibrary>;
template void bubbleSort<EnhancedLibrary>(EnhancedLibrary* array, int size);
template int binarySearch<EnhancedLibrary>(EnhancedLibrary* array, int size, const EnhancedLibrary& target);