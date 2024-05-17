#include "BorrowResource.h"
#include "FacultyMember.h"
#include "PublicMember.h"
#include "Database.h"
#include "Book.h"
#include "DVD.h"
#include "Magazine.h"
#include "ViewDetails.h"
#include <iostream>
using namespace std;

BorrowResource::BorrowResource(const string &userID, Database &db) : Transaction(userID), database(db) {}

void BorrowResource::execute()
{
    int resourceID;
    cout << "Enter the ID of the resource to borrow: ";
    cin >> resourceID;

    User* user = database.findUser(getUserID());
    if (!user) {
        cout << "User not found." << endl;
        return;
    }

    // Determine the borrowing period based on the user type
    string borrowingPeriodMessage;
    if (dynamic_cast<FacultyMember*>(user)) {
        borrowingPeriodMessage = "You can borrow this resource for 15 days. Don't forget to return it.";
    } else if (dynamic_cast<PublicMember*>(user)) {
        borrowingPeriodMessage = "You can borrow this resource for 7 days. Don't forget to return it.";
    } else {
        cout << "Unknown user type." << endl;
        return;
    }

    // Check for books
    Book* book = database.findBook(resourceID);
    if (book != nullptr) {
        if (book->getAvailabilityStatus()) {
            cout << "You have borrowed the book: ";
            book->printDetails();
            cout << borrowingPeriodMessage << endl;
            book->setAvailabilityStatus(false);
            return;
        } else {
            cout << "Book is not available." << endl;
            return;
        }
    }

    // Check for DVDs
    DVD* dvd = database.findDVD(resourceID);
    if (dvd != nullptr) {
        if (dvd->getAvailabilityStatus()) {
            cout << "You have borrowed the DVD: ";
            dvd->printDetails();
            cout << borrowingPeriodMessage << endl;
            dvd->setAvailabilityStatus(false);
            return;
        } else {
            cout << "DVD is not available." << endl;
            return;
        }
    }

    // Check for magazines
    Magazine* magazine = database.findMagazine(resourceID);
    if (magazine != nullptr) {
        if (magazine->getAvailabilityStatus()) {
            cout << "You have borrowed the magazine: ";
            magazine->printDetails();
            cout << borrowingPeriodMessage << endl;
            magazine->setAvailabilityStatus(false);
            return;
        } else {
            cout << "Magazine is not available." << endl;
            return;
        }
    }

    cout << "Resource not found." << endl;
}
