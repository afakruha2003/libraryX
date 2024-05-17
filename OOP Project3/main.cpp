#include "System.h"
#include "System.cpp"
#include "LibraryResource.h"
#include "LibraryResource.cpp"
#include "BorrowResource.h"
#include "BorrowResource.cpp"
#include "ReturnResource.cpp"
#include "ReturnResource.h"
#include "ViewDetails.h"
#include "ViewDetails.cpp"
#include "User.cpp"
#include "User.h"
#include "Transaction.h"
#include "Transaction.cpp"
#include "Database.h"
#include "Database.cpp"
#include "Book.h"
#include "Book.cpp"
#include "DVD.h"
#include "DVD.cpp"
#include "Magazine.h"
#include "Magazine.cpp"
#include "FacultyMember.h"
#include "FacultyMember.cpp"
#include "PublicMember.h"
#include "PublicMember.cpp"
#include <ctime>
#include <string>
class System;

int main() {
    System librarySystem; // Create the system object
    librarySystem.run(); // Run the system

    return 0;
}
