#include "ViewDetails.h"
#include <iostream>

ViewDetails::ViewDetails(const std::string& userID, Database& db)
    : Transaction(userID), database(db) {}

void ViewDetails::execute() {
    int resourceID;
    std::cout << "Enter the Resource ID to view details: ";
    std::cin >> resourceID;

    if (Book* book = database.findBook(resourceID)) {
        book->printDetails();
    } else if (DVD* dvd = database.findDVD(resourceID)) {
        dvd->printDetails();
    } else if (Magazine* magazine = database.findMagazine(resourceID)) {
        magazine->printDetails();
    } else {
        std::cout << "Resource not found.\n";
    }
}
