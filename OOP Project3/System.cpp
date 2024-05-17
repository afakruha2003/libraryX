#include "System.h"
#include "Database.h"
#include "ViewDetails.h"
#include "BorrowResource.h"
#include "ReturnResource.h"
#include <iostream>

System::System() : userAuthenticated(false), currentUserID("") {}

void System::run() {
    while (true) {
        while (!userAuthenticated) {
            std::cout << "\nWelcome to LibraryX!\n";
            authenticateUser();
        }
        performTransactions();
        userAuthenticated = false;
        currentUserID = "";
        std::cout << "\nThank you! Goodbye!\n";
    }
}

void System::authenticateUser() {
    std::string userID;
    std::string password;

    std::cout << "\nEnter User ID: ";
    std::cin >> userID;
    std::cout << "Enter Password: ";
    std::cin >> password;

    if (database.authenticateUser(userID, password)) {
        userAuthenticated = true;
        currentUserID = userID;
        std::cout << "\nUser authenticated successfully!\n";
    } else {
        std::cout << "\nInvalid User ID or Password. Please try again.\n";
    }
}

void System::performTransactions() {
    while (true) {
        int choice;
        std::cout << "\n1. View Details\n2. Borrow Resource\n3. Return Resource\n4. Logout\nEnter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                ViewDetails viewDetails(currentUserID, database);
                viewDetails.execute();
                break;
            }
            case 2: {
                BorrowResource borrowResource(currentUserID, database);
                borrowResource.execute();
                break;
            }
            case 3: {
                ReturnResource returnResource(currentUserID, database);
                returnResource.execute();
                break;
            }
            case 4:
                return;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }
}
