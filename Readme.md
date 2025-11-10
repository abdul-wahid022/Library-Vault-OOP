# 📚 Library Management System with OOP

A comprehensive C++ based Library Management System implementing Object-Oriented Programming concepts including inheritance, polymorphism, operator overloading, templates, and dynamic memory management.

## 🌟 Features

### Administrator Features
- ➕ Add new books (Fiction & Non-Fiction)
- 📖 Display all library books
- 📚 View fiction books with ratings and genres
- 📘 View non-fiction books with ratings and subjects
- 👥 View list of registered students
- 🔐 Secure admin login

### Student Features
- 📝 Student registration with subscription plans
- 🔑 Secure student login
- 📤 Issue books from library
- 📥 Return books to library
- 💳 Subscription management (Basic, Premium, Premium Plus)

### Book Categories
- **Fiction Books**: Include genre and rating
- **Non-Fiction Books**: Include subject and rating

## 🖥️ System Screenshots

### Main Menu
![Main menu](screenshots/Screenshot%202025-11-10%20211940.png)
*Main menu showing Administrator, Student Login, Student Register, and Exit options*

### Administrator Panel

#### Admin Login
![Admin Login](screenshots/Screenshot%202025-11-10%20211632.png)
*Secure administrator login with email and password*

#### Admin Menu
![Admin Menu](screenshots/Screenshot%202025-11-10%20211540.png)
*Administrator dashboard with all management options*

#### Adding Books
![Adding Fiction Book](screenshots/Screenshot%202025-11-10%20211526.png)
*Adding a fiction book with all details including genre and rating*

![Adding Non-Fiction Book](screenshots/Screenshot%202025-11-10%20211511.png)
*Adding a non-fiction book with subject and rating*

#### Viewing Books
![Display All Books](screenshots/Screenshot%202025-11-10%20211456.png)
*Complete library catalog showing all books*

![Fiction Books](Screenshot%202025-11-10%20211439.png)
*Specialized view of fiction books with genres*

![Non-Fiction Books](screenshots/Screenshot%202025-11-10%20211355.png)
*Specialized view of non-fiction books with subjects*

### Student Panel

#### Student Login
![Student Login](screenshots/Screenshot%202025-11-10%20211111.png)
*Student login showing welcome message and subscription type*

#### Registered Students List
![Registered Students](screenshots/Screenshot%202025-11-10%20212039.png)
*List of all registered students with their details and subscription status*

#### Student Menu & Book Operations
![Student Menu - Issue Book](screenshots/Screenshot%202025-11-10%20211940.png)
*Student issuing a book from the library*

![Student Menu - Return Book](screenshots/Screenshot%202025-11-10%20212039.png)
*Student returning a book to the library*

#### Student Registration
![Student Registration](screenshots/Screenshot%202025-11-10%20212214.png)
*New student registration with subscription plan selection*

![New Student Login](screenshots/Screenshot%202025-11-10%20212149.png)
*Newly registered student logging in with Premium subscription*

## 🏗️ Project Structure

```
library-management-system/
│
├── enhanced_main.cpp          # Main program file
├── enhanced_library.h         # Library class header
├── enhanced_library.cpp       # Library class implementation
├── enhanced_globals.h         # Global variables and arrays header
├── enhanced_globals.cpp       # Global functions implementation
├── book.h                     # Book class hierarchy header
├── book.cpp                   # Book class implementation
├── student.h                  # Student class header
├── student.cpp                # Student class implementation
├── fiction.txt                # Predefined fiction books data
├── nonfiction.txt             # Predefined non-fiction books data
├── screenshots/               # Project screenshots
└── README.md                  # Project documentation
```

## 🔧 Technical Implementation

### Object-Oriented Concepts Used

1. **Classes and Objects**
   - `EnhancedLibrary`: Main library management class
   - `Book`: Abstract base class for books
   - `fiction_book`: Derived class for fiction books
   - `non_fiction_book`: Derived class for non-fiction books
   - `Student`: Student management class

2. **Inheritance**
   - `fiction_book` and `non_fiction_book` inherit from `Book`
   - Implements polymorphic behavior through virtual functions

3. **Polymorphism**
   - Pure virtual function `displayDetails()` in base `Book` class
   - Overridden in derived classes for specialized display

4. **Operator Overloading**
   - Assignment operator (`=`)
   - Comparison operators (`==`, `!=`, `<`, `>`)
   - Stream insertion operator (`<<`)

5. **Templates**
   - `DynamicArray<T>`: Template class for dynamic arrays
   - `displayArray<T>()`: Template function for displaying arrays
   - `bubbleSort<T>()`: Template function for sorting
   - `binarySearch<T>()`: Template function for searching

6. **Dynamic Memory Management**
   - Dynamic arrays with automatic resizing
   - Copy constructors and destructors
   - Memory cleanup functions

7. **Constructors**
   - Default constructors
   - Parameterized constructors
   - Copy constructors

8. **Friend Functions**
   - `operator<<` for output formatting
   - `displayBookWithDetails()` for enhanced display

## 💾 Data Files

### fiction.txt Format
```
[Book ID]
[Book Name]
[Author Name]
[Price]
[Pages]
[Rating]
[Genre]
```

### nonfiction.txt Format
```
[Book ID]
[Book Name]
[Author Name]
[Price]
[Pages]
[Rating]
[Subject]
```

## 🔐 Default Credentials

### Administrator
- **Email**: `abdul@gmail.com`
- **Password**: `abdul`

### Sample Student (Pre-registered)
- **Email**: `shoaib@student.com`
- **Password**: `shoaib123`
- **Roll No**: 1001
- **Subscription**: Premium

## 💳 Subscription Plans

| Plan | Price | Features |
|------|-------|----------|
| **Basic** | Free | Basic book access |
| **Premium** | $10/month | Extended access and features |
| **Premium Plus** | $20/month | Full access with premium features |

## 🚀 How to Compile and Run

### Using g++ (GCC)
```bash
g++ enhanced_main.cpp enhanced_library.cpp enhanced_globals.cpp book.cpp student.cpp -o library_system
./library_system
```

### Using Visual Studio / Code::Blocks
1. Create a new C++ project
2. Add all `.cpp` and `.h` files to the project
3. Ensure `fiction.txt` and `nonfiction.txt` are in the same directory
4. Build and run the project

## 📋 Prerequisites

- C++ Compiler (GCC/MinGW/MSVC)
- C++11 or later
- Text files: `fiction.txt` and `nonfiction.txt` in the project directory

## 🎯 Key Features Implementation

### Dynamic Memory Management
- Arrays automatically resize when capacity is reached
- Proper memory cleanup on program exit
- Copy constructors for deep copying

### Input Validation
- Integer input validation with error handling
- String input using `getline()` for spaces
- Login credential verification

### File Handling
- Loading predefined books from text files
- Handling Windows line endings (`\r\n`)
- Error handling for file operations

### Book Management
- Unique book IDs
- Issue/return tracking
- Student association with issued books

## 👨‍💻 Author

**Abdul Wahid**
- GitHub: [@abdul-wahid022](https://github.com/abdul-wahid022)
- Repository: [Library-Vault-OOP](https://github.com/abdul-wahid022/Library-Vault-OOP)

## 📄 License

This project is open source and available under the [MIT License](LICENSE).

## 🤝 Contributing

Contributions, issues, and feature requests are welcome! Feel free to check the [issues page](https://github.com/abdul-wahid022/Library-Vault-OOP/issues).

## ⭐ Show your support

Give a ⭐️ if you like this project!

---

**Note**: All screenshots are included in the repository. Simply upload your screenshot images to the repository, and they will automatically display in this README.
