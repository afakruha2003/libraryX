#include "ReturnResource.h"
#include "ViewDetails.h"
#include "Database.h"
#include "Book.h"
#include "DVD.h"
#include "Magazine.h"
#include <iostream>

ReturnResource::ReturnResource(const std::string& userID, Database& db) : Transaction(userID), database(db) {}

void ReturnResource::execute() {
    int resourceID;
    std::cout << "Enter the ID of the resource to return: ";
    std::cin >> resourceID;

    // Check for books
    Book* book = database.findBook(resourceID);
    if (book != nullptr) {
       if(!(book->getAvailabilityStatus())){
       
        std::cout << "You have returned the book: " ;
        book->printDetails() ;}
        else{
            std::cout << "Resource not  borrowed." << std::endl;
        }
        return;
    }

    // Check for DVDs
    DVD* dvd = database.findDVD(resourceID);
    if (dvd != nullptr) {
        if(!(dvd->getAvailabilityStatus())){
       
        std::cout << "You have returned the DVD: " ;
        dvd->printDetails() ;}
        else{
            std::cout << "Resource not  borrowed." << std::endl;
        }
        return;
    }

    // Check for magazines
    Magazine* magazine = database.findMagazine(resourceID);
    if (magazine != nullptr) {
        if(!(magazine->getAvailabilityStatus())){
       
        std::cout << "You have returned the magazine: " ;
        magazine->printDetails() ;}
        else{
            std::cout << "Resource not borrowed." << std::endl;
        }
        return;
    }

    std::cout << "Resource not found." << std::endl;
}
