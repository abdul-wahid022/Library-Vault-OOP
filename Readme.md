# 📚 Library Management System with OOP

<div align="center">

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![OOP](https://img.shields.io/badge/OOP-Concepts-green?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)

A comprehensive C++ based Library Management System implementing Object-Oriented Programming concepts including **inheritance**, **polymorphism**, **operator overloading**, **templates**, and **dynamic memory management**.

[Features](#-features) • [Screenshots](#-system-screenshots) • [Installation](#-how-to-compile-and-run) • [Documentation](#-technical-implementation)

</div>

---

## 🌟 Features

<table>
<tr>
<td width="50%">

### 👨‍💼 Administrator Features
- ➕ Add new books (Fiction & Non-Fiction)
- 📖 Display all library books
- 📚 View fiction books with ratings and genres
- 📘 View non-fiction books with ratings and subjects
- 👥 View list of registered students
- 🔐 Secure admin login

</td>
<td width="50%">

### 👨‍🎓 Student Features
- 📝 Student registration with subscription plans
- 🔑 Secure student login
- 📤 Issue books from library
- 📥 Return books to library
- 💳 Subscription management (Basic, Premium, Premium Plus)

</td>
</tr>
</table>

### 📖 Book Categories
- **Fiction Books**: Include genre and rating
- **Non-Fiction Books**: Include subject and rating

---

## 🖥️ System Screenshots

### 🏠 Main Menu

<div align="center">
<img src="screenshots/Screenshot%202025-11-10%20211940.png" alt="Main Menu" width="700"/>

*Main menu showing Administrator, Student Login, Student Register, and Exit options*
</div>

---

## 👨‍💼 Administrator Panel

### 🔐 Admin Login & Dashboard

<table>
<tr>
<td width="50%">
<img src="screenshots/Screenshot%202025-11-10%20211632.png" alt="Admin Login" width="100%"/>
<p align="center"><b>Admin Login</b><br/>Secure administrator authentication</p>
</td>
<td width="50%">
<img src="screenshots/Screenshot%202025-11-10%20211540.png" alt="Admin Menu" width="100%"/>
<p align="center"><b>Admin Dashboard</b><br/>Full management control panel</p>
</td>
</tr>
</table>

### 📚 Book Management

<table>
<tr>
<td width="50%">
<img src="screenshots/Screenshot%202025-11-10%20211526.png" alt="Add Fiction Book" width="100%"/>
<p align="center"><b>Add Fiction Book</b><br/>Add books with genre and rating</p>
</td>
<td width="50%">
<img src="screenshots/Screenshot%202025-11-10%20211511.png" alt="Add Non-Fiction Book" width="100%"/>
<p align="center"><b>Add Non-Fiction Book</b><br/>Add books with subject and rating</p>
</td>
</tr>
</table>

### 📖 View Library Collections

<div align="center">
<img src="screenshots/Screenshot%202025-11-10%20211456.png" alt="All Books" width="700"/>

**Complete Library Catalog** - View all books in the system
</div>

<table>
<tr>
<td width="50%">
<img src="screenshots/Screenshot%202025-11-10%20211439.png" alt="Fiction Books" width="100%"/>
<p align="center"><b>Fiction Collection</b><br/>Browse fiction books with genres</p>
</td>
<td width="50%">
<img src="screenshots/Screenshot%202025-11-10%20211355.png" alt="Non-Fiction Books" width="100%"/>
<p align="center"><b>Non-Fiction Collection</b><br/>Browse non-fiction books with subjects</p>
</td>
</tr>
</table>

---

## 👨‍🎓 Student Panel

### 🔑 Student Authentication

<table>
<tr>
<td width="50%">
<img src="screenshots/Screenshot%202025-11-10%20211111.png" alt="Student Login" width="100%"/>
<p align="center"><b>Student Login</b><br/>Secure student authentication portal</p>
</td>
<td width="50%">
<img src="screenshots/Screenshot%202025-11-10%20212149.png" alt="New Student Login" width="100%"/>
<p align="center"><b>Welcome Screen</b><br/>Premium subscription status display</p>
</td>
</tr>
</table>

### 📚 Book Operations

<table>
<tr>
<td width="50%">
<img src="screenshots/Screenshot%202025-11-10%20211940.png" alt="Issue Book" width="100%"/>
<p align="center"><b>Issue Book</b><br/>Borrow books from library</p>
</td>
<td width="50%">
<img src="screenshots/Screenshot%202025-11-10%20212039.png" alt="Return Book" width="100%"/>
<p align="center"><b>Return Book</b><br/>Return borrowed books</p>
</td>
</tr>
</table>

### 📝 Registration & Student Management

<table>
<tr>
<td width="50%">
<img src="screenshots/Screenshot%202025-11-10%20212214.png" alt="Student Registration" width="100%"/>
<p align="center"><b>New Student Registration</b><br/>Register with subscription plans</p>
</td>
<td width="50%">
<img src="screenshots/Screenshot%202025-11-10%20212039.png" alt="Students List" width="100%"/>
<p align="center"><b>Registered Students</b><br/>View all registered students</p>
</td>
</tr>
</table>

---

## 🏗️ Project Structure

```
Library-Vault-OOP/
│
├── 📄 enhanced_main.cpp          # Main program file
├── 📄 enhanced_library.h         # Library class header
├── 📄 enhanced_library.cpp       # Library class implementation
├── 📄 enhanced_globals.h         # Global variables and arrays header
├── 📄 enhanced_globals.cpp       # Global functions implementation
├── 📄 book.h                     # Book class hierarchy header
├── 📄 book.cpp                   # Book class implementation
├── 📄 student.h                  # Student class header
├── 📄 student.cpp                # Student class implementation
├── 📄 fiction.txt                # Predefined fiction books data
├── 📄 nonfiction.txt             # Predefined non-fiction books data
├── 📁 screenshots/               # Project screenshots
└── 📄 README.md                  # Project documentation
```

---

## 🔧 Technical Implementation

### Object-Oriented Concepts Used

<table>
<tr>
<td width="50%">

#### 🎯 Core OOP Concepts
- **Classes and Objects**
  - `EnhancedLibrary`: Main library management
  - `Book`: Abstract base class
  - `fiction_book`: Fiction book management
  - `non_fiction_book`: Non-fiction book management
  - `Student`: Student management

- **Inheritance**
  - Multi-level class hierarchy
  - Polymorphic behavior implementation

</td>
<td width="50%">

#### ⚙️ Advanced Features
- **Polymorphism**
  - Virtual functions
  - Runtime binding

- **Operator Overloading**
  - Assignment (`=`)
  - Comparison (`==`, `!=`, `<`, `>`)
  - Stream insertion (`<<`)

- **Templates**
  - Generic dynamic arrays
  - Template functions for sorting & searching

</td>
</tr>
</table>

---

## 💾 Data Files

<table>
<tr>
<td width="50%">

### 📖 fiction.txt Format
```
[Book ID]
[Book Name]
[Author Name]
[Price]
[Pages]
[Rating]
[Genre]
```

</td>
<td width="50%">

### 📘 nonfiction.txt Format
```
[Book ID]
[Book Name]
[Author Name]
[Price]
[Pages]
[Rating]
[Subject]
```

</td>
</tr>
</table>

---

## 🔐 Default Credentials

<table>
<tr>
<td width="50%">

### 👨‍💼 Administrator
- **Email**: `abdul@gmail.com`
- **Password**: `abdul`

</td>
<td width="50%">

### 👨‍🎓 Sample Student
- **Email**: `shoaib@student.com`
- **Password**: `shoaib123`
- **Roll No**: 1001
- **Subscription**: Premium

</td>
</tr>
</table>

---

## 💳 Subscription Plans

<div align="center">

| Plan | 💰 Price | 📋 Features |
|:----:|:--------:|:------------|
| **Basic** | Free | Basic book access |
| **Premium** | $10/month | Extended access and features |
| **Premium Plus** | $20/month | Full access with premium features |

</div>

---

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

---

## 📋 Prerequisites

<div align="center">

![C++11](https://img.shields.io/badge/C++-11%20or%20later-blue?style=flat-square)
![Compiler](https://img.shields.io/badge/Compiler-GCC%20%7C%20MinGW%20%7C%20MSVC-orange?style=flat-square)

</div>

- C++ Compiler (GCC/MinGW/MSVC)
- C++11 or later standard
- Text files: `fiction.txt` and `nonfiction.txt` in the project directory

---

## 🎯 Key Features Implementation

<table>
<tr>
<td width="33%">

### 🔄 Dynamic Memory
- Auto-resizing arrays
- Proper memory cleanup
- Deep copy constructors

</td>
<td width="33%">

### ✅ Input Validation
- Integer validation
- String handling
- Credential verification

</td>
<td width="33%">

### 📁 File Handling
- Text file parsing
- Error handling
- Windows compatibility

</td>
</tr>
</table>

---

## 👨‍💻 Author

<div align="center">

### Abdul Wahid

[![GitHub](https://img.shields.io/badge/GitHub-abdul--wahid022-181717?style=for-the-badge&logo=github)](https://github.com/abdul-wahid022)
[![Repository](https://img.shields.io/badge/Repository-Library--Vault--OOP-blue?style=for-the-badge&logo=github)](https://github.com/abdul-wahid022/Library-Vault-OOP)

</div>

---

## 📄 License

<div align="center">

This project is open source and available under the [MIT License](LICENSE).

</div>

---

## 🤝 Contributing

Contributions, issues, and feature requests are welcome! Feel free to check the [issues page](https://github.com/abdul-wahid022/Library-Vault-OOP/issues).

---

## ⭐ Show your support

<div align="center">

Give a ⭐️ if you like this project!

**Made by Abdul Wahid**

</div>
