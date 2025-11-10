#include "enhanced_globals.h"
#include <limits>
#include <fstream>
#include <iostream>
using namespace std;

int getInt(const string& question) {
    int value;
    while (true) {
        cout << question;
        cin >> value;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\t\t\t\t\t\t\t Invalid Input. Please enter a valid number." << endl;
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        }
    }
}

//Student Registration/Login Functions 
void registerStudent() {
    cout << "\n\t\t\t\t\t\t\t =========================" << endl;
    cout << "\n\t\t\t\t\t\t\t   STUDENT REGISTRATION   " << endl;
    cout << "\n\t\t\t\t\t\t\t =========================" << endl;
    
    string name, email, password, subscription;
    int roll_no;
    
    cout << "\n\t\t\t\t\t\t\t Enter your name: ";
    getline(cin, name);
    
    cout << "\t\t\t\t\t\t\t Enter your email: ";
    getline(cin, email);
    
    cout << "\t\t\t\t\t\t\t Enter your password: ";
    getline(cin, password);
    
    roll_no = getInt("\t\t\t\t\t\t\t Enter your roll number: ");
    
    cout << "\n\t\t\t\t\t\t\t Choose subscription type:" << endl;
    cout << "\t\t\t\t\t\t\t 1) Basic (Free)" << endl;
    cout << "\t\t\t\t\t\t\t 2) Premium ($10/month)" << endl;
    cout << "\t\t\t\t\t\t\t 3) Premium Plus ($20/month)" << endl;
    
    int sub_choice = getInt("\t\t\t\t\t\t\t Enter choice: ");
    
    switch(sub_choice) {
        case 1: subscription = "Basic"; break;
        case 2: subscription = "Premium"; break;
        case 3: subscription = "Premium Plus"; break;
        default: subscription = "Basic"; break;
    }
    
    // Check if arrays need resizing
    resizeArrays();
    
    // Create new student using constructor
    students[count_students] = Student(name, email, password, roll_no, subscription);
    count_students++;
    
    cout << "\n\t\t\t\t\t\t\t Registration successful!" << endl;
    cout << "\t\t\t\t\t\t\t Your subscription: " << subscription << endl;
}

bool loginStudent() {
    string email, password;
    cout << "\n\t\t\t\t\t\t\t=========================" << endl;
    cout << "\n\t\t\t\t\t\t\t     STUDENT LOGIN        " << endl;
    cout << "\n\t\t\t\t\t\t\t=========================" << endl;
    
    cout << "\n\t\t\t\t\t\t\t Enter email: ";
    cin >> email;
    cout << "\t\t\t\t\t\t\t Enter password: ";
    cin >> password;
    
    // Use template function to search for student
    for (int i = 0; i < count_students; i++) {
        if (students[i].get_email() == email && students[i].get_password() == password) {
            if (students[i].is_student_active()) {
                cout << "\n\t\t\t\t\t\t\t Login successful!" << endl;
                cout << "\t\t\t\t\t\t\t Welcome, " << students[i].get_name() << endl;
                cout << "\t\t\t\t\t\t\t Subscription: " << students[i].get_subscription() << endl;
                return true;
            } else {
                cout << "\n\t\t\t\t\t\t\t Account is inactive!" << endl;
                return false;
            }
        }
    }
    cout << "\n\t\t\t\t\t\t\t Invalid email or password!" << endl;
    return false;
}

//  Administrator Functions 
void addBookByAdministrator() {
    
    resizeArrays();
    
    string b, c, z;

    int id = getInt("\n\t\t\t\t\t\t\t Enter the book id: ");
    
    cout << "\t\t\t\t\t\t\t Enter the book name: ";
    getline(cin, b);

    cout << "\t\t\t\t\t\t\t Enter the author name: ";
    getline(cin, c);

    int price = getInt("\t\t\t\t\t\t\t Enter price of the book: ");
    int pages = getInt("\t\t\t\t\t\t\t Enter number of pages in the book: ");

    
    lib[count_book] = EnhancedLibrary(id, b, c, price, pages);

    char isFiction;
    float rating;

    cout << "\t\t\t\t\t\t\t Is it a fiction book(y/n)?  ";
    cin >> isFiction;
    cin.ignore();

    if (tolower(isFiction) == 'y') {
        fiction_books[count_fiction].set_name(b);
        cout << "\t\t\t\t\t\t\t Enter the rating of book: ";
        cin >> rating;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        fiction_books[count_fiction].set_rating(rating);

        cout << "\t\t\t\t\t\t\t Enter genre of book: ";
        getline(cin, z);
        fiction_books[count_fiction].set_genre(z);

        count_fiction++;
    } else {
        non_fiction_books[count_nonfiction].set_name(b);
        cout << "\t\t\t\t\t\t\t Enter the rating of book: ";
        cin >> rating;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        non_fiction_books[count_nonfiction].set_rating(rating);

        cout << "\t\t\t\t\t\t\t Enter subject of book: ";
        getline(cin, z);
        non_fiction_books[count_nonfiction].set_subject(z);

        count_nonfiction++;
    }

    count_book++;
    cout << "\n\t\t\t\t\t\t\t Book added successfully!" << endl;
}

void displayBooksDetails() {
    displayArray(lib, count_book, "~~~~LIBRARY BOOKS~~~~");
}

void displayFictionBookDetails() {
    displayArray(fiction_books, count_fiction, "~~~~~FICTION BOOKS~~~~~");
}

void displayNonFictionBookDetails() {
    displayArray(non_fiction_books, count_nonfiction, "~~~NON-FICTION BOOKS~~~");
}

void displayRegisteredStudents() {
    cout << "\n\t\t\t\t\t\t\t =========================" << endl;
    cout << "\n\t\t\t\t\t\t\t  REGISTERED STUDENTS LIST" << endl;
    cout << "\n\t\t\t\t\t\t\t =========================" << endl;
    
    if (count_students == 0) {
        cout << "\n\t\t\t\t\t\t\t No students registered yet." << endl;
        return;
    }
    
    for (int i = 0; i < count_students; i++) {
        cout << "\n\t\t\t\t\t\t\t--------------------------------------\n";
        cout << "\n\t\t\t\t\t\t\t Student " << i + 1 << ":" << endl;
        students[i].displayDetails();
    }
}

void ToAdministrator() {
    int choice;
    while (true) {
        cout << "\n\n\t\t\t\t\t\t_____________________________________\n";
        cout << "\t\t\t\t\t\t         Administrator Menu          \n";
        cout << "\t\t\t\t\t\t_____________________________________\n\n";
        cout << "\t\t\t\t\t\t|     1)Add Books                   |\n";
        cout << "\t\t\t\t\t\t|     2)Display All books           |\n";
        cout << "\t\t\t\t\t\t|     3)Display fiction books       |\n";
        cout << "\t\t\t\t\t\t|     4)Display non-fiction books   |\n";
        cout << "\t\t\t\t\t\t|     5)List of registered students |\n";
        cout << "\t\t\t\t\t\t|     6)Exit                        |\n";
        cout << "\t\t\t\t\t\t_____________________________________\n\n";

        cout << "\n\t\t\t\t\t\t\t Please enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: addBookByAdministrator(); break;
        case 2: displayBooksDetails(); break;
        case 3: displayFictionBookDetails(); break;
        case 4: displayNonFictionBookDetails(); break;
        case 5: displayRegisteredStudents(); break;
        case 6: return;
        default: cout << "\t\t\t\t\t\t\t Invalid choice" << endl;
        }
    }
}

//Student Functions
void issueBookByStudent() {
    string book_name;
    int book_id;
    cout << "\n\t\t\t\t\t\t\t Enter the book name you want to issue: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, book_name);

    book_id = getInt("\n\t\t\t\t\t\t\t Enter the book id you want to issue: ");

  
    for (int i = 0; i < count_book; i++) {
        if (lib[i] == EnhancedLibrary(book_id, book_name, "", 0, 0)) {
            if (lib[i].get_student_name() != "NULL") {
                cout << "\n\t\t\t\t\t\t\t This book is already issued by some student" << endl;
                return;
            } else {
                string student_name;
                int roll_no;
                cout << "\n\t\t\t\t\t\t\t Please enter your name: ";
                getline(cin, student_name);
                lib[i].set_student_name(student_name);

                roll_no = getInt("\n\t\t\t\t\t\t\t Please enter your roll no.: ");
                lib[i].set_student_roll_no(roll_no);
                lib[i].set_issued(true);

                cout << "\n\t\t\t\t\t\t\t Book issued successfully." << endl;
                return;
            }
        }
    }
    cout << "\n\t\t\t\t\t\t\t No book found with the given name and ID." << endl;
}

void returnBookByStudent() {
    string book_name;
    int book_id;

    cout << "\n\t\t\t\t\t\t\t Enter the book name you want to return: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, book_name);

    book_id = getInt("\n\t\t\t\t\t\t\t Enter the book id you want to return: ");

    for (int i = 0; i < count_book; i++) {
        if (lib[i].get_book() == book_name && lib[i].get_id() == book_id) {
            if (lib[i].get_student_name() == "NULL") {
                cout << "\n\t\t\t\t\t\t\t This book is not issued to any student" << endl;
                return;
            } else {
                lib[i].set_student_name("NULL");
                lib[i].set_student_roll_no(0);
                lib[i].set_issued(false);
                cout << "\n\t\t\t\t\t\t\t Book returned successfully." << endl;
                return;
            }
        }
    }

    cout << "\n\t\t\t\t\t\t\t No book found with the given name and ID." << endl;
}

void ToStudent() {
    int choice;
    while (true) {
        cout << "\n\n\t\t\t\t\t\t_____________________________________\n";
        cout << "\t\t\t\t\t\t            Student Menu             \n";
        cout << "\t\t\t\t\t\t_____________________________________\n\n";
        cout << "\t\t\t\t\t\t|         1)Issue the book          |\n";
        cout << "\t\t\t\t\t\t|         2)Return the book         |\n";
        cout << "\t\t\t\t\t\t|         3)Back to main menu       |\n";
        cout << "\t\t\t\t\t\t_____________________________________\n\n";

        cout << "\n\t\t\t\t\t\t\t Please enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: issueBookByStudent(); break;
        case 2: returnBookByStudent(); break;
        case 3: return;
        default: cout << "\n\t\t\t\t Invalid choice!!" << endl << endl;
        }
    }
}

//Login + Main Menu 
string getPassword() {
    string password;
    cout << "\t\t\t\t\t\t\t password : ";
    cin >> password;
    return password;
}

void LibraryMenu() {
    int choice;
    string email, password;

    cout << "\t\t\t\t\t\t_____________________________________\n";
    cout << "\t\t\t\t\t\t          Library Main Menu          \n";
    cout << "\t\t\t\t\t\t_____________________________________\n\n";
    cout << "\t\t\t\t\t\t|           1)Administrator         |\n";
    cout << "\t\t\t\t\t\t|           2)Student Login         |\n";
    cout << "\t\t\t\t\t\t|           3)Student Register      |\n";
    cout << "\t\t\t\t\t\t|           4)Exit                  |\n";
    cout << "\t\t\t\t\t\t_____________________________________\n\n";

    cout << "\n\t\t\t\t\t\t\t Please select: ";
    cin >> choice;

    if (choice == 1) {
        cout << "\t\t\t\t\t\t\t Please login \n";
        cout << "\t\t\t\t\t\t\t enter email : ";
        cin >> email;
        password = getPassword();

        if (email == "abdul@gmail.com" && password == "abdul") {
            ToAdministrator();
        } else {
            cout << "\n\t\t\t\t\t\t\t invalid email/password!!" << endl << endl;
        }
    } else if (choice == 2) {
        if (loginStudent()) {
            ToStudent();
        }
    } else if (choice == 3) {
        cin.ignore();
        registerStudent();
    } else if (choice == 4) {
        cout << "\n\t\t\t\t\t\t\t Thank you for using Library Management System!" << endl;
        exit(0);
    } else {
        cout << "\n\t\t\t\t\t\t\t Invalid choice! Please try again." << endl;
    }
}

// Predefined Books
void loadPredefinedBooks() {
    ifstream finF("fiction.txt");
    ifstream finNF("nonfiction.txt");

    string name, author, extra;
    int id, price, pages;
    float rating;


    while (finF >> id) {
        finF.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(finF, name);
        getline(finF, author);
        finF >> price >> pages >> rating;
        finF.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(finF, extra);

      
        if (!name.empty() && name.back() == '\r') name.pop_back();
        if (!author.empty() && author.back() == '\r') author.pop_back();
        if (!extra.empty() && extra.back() == '\r') extra.pop_back();

        
        resizeArrays();

        
        lib[count_book] = EnhancedLibrary(id, name, author, price, pages);

        fiction_books[count_fiction].set_name(name);
        fiction_books[count_fiction].set_rating(rating);
        fiction_books[count_fiction].set_genre(extra);

        count_book++;
        count_fiction++;
    }

   
    while (finNF >> id) {
        finNF.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(finNF, name);
        getline(finNF, author);
        finNF >> price >> pages >> rating;
        finNF.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(finNF, extra);

        
        if (!name.empty() && name.back() == '\r') name.pop_back();
        if (!author.empty() && author.back() == '\r') author.pop_back();
        if (!extra.empty() && extra.back() == '\r') extra.pop_back();

     
        resizeArrays();

        
        lib[count_book] = EnhancedLibrary(id, name, author, price, pages);

        non_fiction_books[count_nonfiction].set_name(name);
        non_fiction_books[count_nonfiction].set_rating(rating);
        non_fiction_books[count_nonfiction].set_subject(extra);

        count_book++;
        count_nonfiction++;
    }
}


int main() {
    
    initializeArrays();
    
    
    loadPredefinedBooks();
    
    cout << "\n\t\t\t\t\t\t===============================" << endl;
    cout << "\t\t\t\t\t\t\t LIBRARY MANAGEMENT" << endl;
    cout << "\t\t\t\t\t\t\t      SYSTEM WITH OOP" << endl;
    cout << "\t\t\t\t\t\t\t===============================" << endl;
    
    while (true) {
        LibraryMenu();
    }
    
    // Cleanup dynamic arrays 
    cleanupArrays();
    return 0;
}