#include "Book.h"
#include <iostream>

Book::Book(int id, const std::string& title, const std::string& author, bool available, const std::string& edition, const std::string& genre)
    : LibraryResource(id, title, author, available), edition(edition), genre(genre) {}

std::string Book::getEdition() const {
    return edition;
}

std::string Book::getGenre() const {
    return genre;
}

void Book::setEdition(const std::string& edition) {
    this->edition = edition;
}

void Book::setGenre(const std::string& genre) {
    this->genre = genre;
}

void Book::printDetails() const {
    std::cout << "Book ID: " << getResourceID() << std::endl;
    std::cout << "Title: " << getTitle() << std::endl;
    std::cout << "Author: " << getAuthor() << std::endl;
    std::cout << "Available: " << (getAvailabilityStatus() ? "Yes" : "No") << std::endl;
    std::cout << "Edition: " << edition << std::endl;
    std::cout << "Genre: " << genre << std::endl;
}

int Book::getResourceID() const {
    return LibraryResource::getResourceID();
}
