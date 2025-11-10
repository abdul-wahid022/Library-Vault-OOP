#include "enhanced_globals.h"

// Dynamic arrays
EnhancedLibrary* lib = nullptr;
fiction_book* fiction_books = nullptr;
non_fiction_book* non_fiction_books = nullptr;
Student* students = nullptr;

int count_book = 0;
int count_fiction = 0;
int count_nonfiction = 0;
int count_students = 0;


int max_books = 100;
int max_fiction = 50;
int max_nonfiction = 50;
int max_students = 50;

void initializeArrays() {
    lib = new EnhancedLibrary[max_books];
    fiction_books = new fiction_book[max_fiction];
    non_fiction_books = new non_fiction_book[max_nonfiction];
    students = new Student[max_students];
    
    // Add one default student so list is not empty
    students[0] = Student("Shoaib", "shoaib@student.com", "shoaib123", 1001, "Premium");
    count_students = 1;
}

void cleanupArrays() {
    delete[] lib;
    delete[] fiction_books;
    delete[] non_fiction_books;
    delete[] students;
}

void resizeArrays() {
    if (count_book >= max_books) {
        max_books *= 2;
        EnhancedLibrary* new_lib = new EnhancedLibrary[max_books];
        for (int i = 0; i < count_book; i++) {
            new_lib[i] = lib[i];
        }
        delete[] lib;
        lib = new_lib;
    }
    
    if (count_fiction >= max_fiction) {
        max_fiction *= 2;
        fiction_book* new_fiction = new fiction_book[max_fiction];
        for (int i = 0; i < count_fiction; i++) {
            new_fiction[i] = fiction_books[i];
        }
        delete[] fiction_books;
        fiction_books = new_fiction;
    }
    
    if (count_nonfiction >= max_nonfiction) {
        max_nonfiction *= 2;
        non_fiction_book* new_nonfiction = new non_fiction_book[max_nonfiction];
        for (int i = 0; i < count_nonfiction; i++) {
            new_nonfiction[i] = non_fiction_books[i];
        }
        delete[] non_fiction_books;
        non_fiction_books = new_nonfiction;
    }
    
    if (count_students >= max_students) {
        max_students *= 2;
        Student* new_students = new Student[max_students];
        for (int i = 0; i < count_students; i++) {
            new_students[i] = students[i];
        }
        delete[] students;
        students = new_students;
    }
}

// Template function implementations
template<typename T>
void displayArray(T* array, int count, const string& title) {
    cout << "\n\t\t\t\t\t\t\t =========================" << endl;
    cout << "\n\t\t\t\t\t\t\t   " << title << endl;
    cout << "\n\t\t\t\t\t\t\t =========================" << endl;
    
    for (int i = 0; i < count; i++) {
        cout << "\n\t\t\t\t\t\t\t--------------------------------------\n";
        cout << "\n\t\t\t\t\t\t\t Entry number: " << i + 1 << endl;
        array[i].displayDetails();
    }
}

// Specialized search functions for different types
bool searchInLibraryArray(EnhancedLibrary* array, int count, const string& searchTerm) {
    for (int i = 0; i < count; i++) {
        if (array[i].get_book().find(searchTerm) != string::npos || 
            array[i].get_author().find(searchTerm) != string::npos) {
            return true;
        }
    }
    return false;
}

bool searchInStudentArray(Student* array, int count, const string& searchTerm) {
    for (int i = 0; i < count; i++) {
        if (array[i].get_name().find(searchTerm) != string::npos || 
            array[i].get_email().find(searchTerm) != string::npos) {
            return true;
        }
    }
    return false;
}


template void displayArray<EnhancedLibrary>(EnhancedLibrary* array, int count, const string& title);
template void displayArray<fiction_book>(fiction_book* array, int count, const string& title);
template void displayArray<non_fiction_book>(non_fiction_book* array, int count, const string& title);
template void displayArray<Student>(Student* array, int count, const string& title);