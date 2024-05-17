#include "Magazine.h"
#include <iostream>

Magazine::Magazine(int id, const std::string& title, const std::string& author, bool status, int issueNumber, const std::string& publisher)
    : LibraryResource(id, title, author, status), issueNumber(issueNumber), publisher(publisher) {}

int Magazine::getIssueNumber() const {
    return issueNumber;
}

std::string Magazine::getPublisher() const {
    return publisher;
}

void Magazine::setIssueNumber(int issueNumber) {
    this->issueNumber = issueNumber;
}

void Magazine::setPublisher(const std::string& publisher) {
    this->publisher = publisher;
}

void Magazine::printDetails() const {
    std::cout << "Magazine ID: " << getResourceID() << "\n"
              << "Title: " << getTitle() << "\n"
              << "Author: " << getAuthor() << "\n"
              << "Publisher: " << publisher << "\n"
              << "Issue Number: " << issueNumber << "\n"
              << "Available: " << (getAvailabilityStatus() ? "Yes" : "No") << "\n";
}
