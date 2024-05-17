#include "User.h"
#include <iostream>
#include <algorithm>

User::User(const std::string& id, const std::string& name, const std::string& contactInfo, const std::string& userType, const std::string& password)
    : id(id), name(name), contactInfo(contactInfo), userType(userType), password(password) {}

std::string User::getID() const {
    return id;
}

std::string User::getName() const {
    return name;
}

std::string User::getContactInfo() const {
    return contactInfo;
}

std::string User::getUserType() const {
    return userType;
}

std::string User::getPassword() const {
    return password;
}

const std::vector<Transaction*>& User::getBorrowingHistory() const {
    return borrowingHistory;
}

void User::setID(const std::string& id) {
    this->id = id;
}

void User::setName(const std::string& name) {
    this->name = name;
}

void User::setContactInfo(const std::string& contactInfo) {
    this->contactInfo = contactInfo;
}

void User::setUserType(const std::string& userType) {
    this->userType = userType;
}

void User::setPassword(const std::string& password) {
    this->password = password;
}

void User::addTransaction(Transaction* transaction) {
    borrowingHistory.push_back(transaction);
}

void User::removeTransaction(Transaction* transaction) {
    borrowingHistory.erase(std::remove(borrowingHistory.begin(), borrowingHistory.end(), transaction), borrowingHistory.end());
}

void User::printDetails() const {
    std::cout << "User ID: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Contact Info: " << contactInfo << std::endl;
    std::cout << "User Type: " << userType << std::endl;
    std::cout << "Password: " << password << std::endl;
}
