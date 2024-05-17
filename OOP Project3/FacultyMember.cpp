#include "FacultyMember.h"
#include <iostream>

FacultyMember::FacultyMember(const std::string& id, const std::string& name, const std::string& contactInfo, const std::string& userType, const std::string& password, int facultyID)
    : User(id, name, contactInfo, userType, password), facultyID(facultyID) {}

int FacultyMember::getFacultyID() const {
    return facultyID;
}

void FacultyMember::setFacultyID(int facultyID) {
    this->facultyID = facultyID;
}

void FacultyMember::renewBorrowedItems() {
    // Implementation for renewing borrowed items
}

void FacultyMember::reserveResource(LibraryResource& resource) {
    // Implementation for reserving a resource
}

void FacultyMember::printDetails() const {
    User::printDetails();
    std::cout << "Faculty ID: " << facultyID << "\n";
}
