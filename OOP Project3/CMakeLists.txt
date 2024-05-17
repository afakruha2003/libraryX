cmake_minimum_required(VERSION 3.0)

project(OOP_Project2)

# Add all header and source files for your project
set(HEADER_FILES
    LibraryResource.h
    Database.h
    System.h
    User.h
    FacultyMember.h
    PublicMember.h
    Book.h
    DVD.h
    Magazine.h
    Transaction.h
    ViewDetails.h
    BorrowResource.h
    ReturnResource.h
)

set(SOURCE_FILES
    LibraryResource.cpp
    Database.cpp
    System.cpp
    User.cpp
    FacultyMember.cpp
    PublicMember.cpp
    Book.cpp
    DVD.cpp
    Magazine.cpp
    Transaction.cpp
    ViewDetails.cpp
    BorrowResource.cpp
    ReturnResource.cpp
)

# Create the executable
add_executable(my_executable ${HEADER_FILES} ${SOURCE_FILES})
