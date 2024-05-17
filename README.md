# LibraryX

# Overview:
This Library Management System is a console-based application designed to manage the operations of a library, including the management of library resources (books, DVDs, and magazines) and users (faculty members and public members). The system allows users to borrow, return, and view details of library resources, and provides authentication for users.

# Features: 
Library Resources Management: Manage different types of resources like books, DVDs, and magazines.
User Management: Support for faculty members and public members with distinct functionalities.
Authentication: User authentication using ID and password.
Transactions: Support for borrowing, returning, and viewing details of resources.
Database Simulation: In-memory database for managing users and resources.
# Classes:
Library Resources
LibraryResource: Base class for library resources.
Book: Derived class for managing book resources.
Magazine: Derived class for managing magazine resources.
DVD: Derived class for managing DVD resources.
# Users:
User: Base class for users.
FacultyMember: Derived class for faculty members with additional functionalities.
PublicMember: Derived class for public members with additional functionalities.
# Transactions:
Transaction: Base class for transactions.
BorrowResource: Derived class for borrowing resources.
ReturnResource: Derived class for returning resources.
ViewDetails: Derived class for viewing resource details.
# Database:
Database: Class for managing users and resources in an in-memory database.
# System:
System: Class for running the library management system, handling user authentication, and managing transactions.
# How to run the repository:
1. If you don't have it, you need to install g++ on you machine (for Windows)

2. Clone the repository:

git clone https://github.com/afakruha2003/libraryX.git
cd libraryX
cd OOP Project3


3. Compile and run :

g++ 'main.cpp' -o main
./main.exe

 # Usage: 
Authentication:

Enter your User ID and password to authenticate.
Example credentials:
Faculty: F001, password1
Faculty: F002, password2
Public: P001, password3
Public: P002, password4
Main Menu:

1 - View resource details
2 - Borrow resource
3 - Return resource
4 - Exit
Performing Transactions:

Follow the prompts to perform transactions based on your selection from the main menu.
Sample Data
The system comes pre-populated with sample data for users and resources:

# Users: 
Faculty Members:

John Doe (ID: F001, Password: password1)
Alice Smith (ID: F002, Password: password2)
Public Members:

Jane Roe (ID: P001, Password: password3)
Bob Brown (ID: P002, Password: password4)
# Resources:
Books:

 The Great Gatsby(ID:1)
1984 (ID:2)

DVDs:

Inception(ID:3)
The Matrix (ID:4)

Magazines:

National Geographic (ID:5)
Time (ID:6)
