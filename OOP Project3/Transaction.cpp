#include "Transaction.h"

Transaction::Transaction(const std::string& userID) : userID(userID) {}

std::string Transaction::getUserID() const {
    return userID;
}

bool Transaction::operator==(const Transaction& other) const {
    return userID == other.userID;
}
