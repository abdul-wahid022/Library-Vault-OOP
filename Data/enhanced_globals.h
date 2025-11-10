#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "enhanced_library.h"
#include "book.h"
#include "student.h"

// Enhanced objects with dynamic memory allocation
extern EnhancedLibrary* lib;
extern fiction_book* fiction_books;
extern non_fiction_book* non_fiction_books;
extern Student* students;

extern int count_book;
extern int count_fiction;
extern int count_nonfiction;
extern int count_students;


extern int max_books;
extern int max_fiction;
extern int max_nonfiction;
extern int max_students;


void initializeArrays();
void cleanupArrays();
void resizeArrays();

// Template functions
template<typename T>
void displayArray(T* array, int count, const string& title);


bool searchInLibraryArray(EnhancedLibrary* array, int count, const string& searchTerm);
bool searchInStudentArray(Student* array, int count, const string& searchTerm);