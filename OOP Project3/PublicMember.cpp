#include "PublicMember.h"
#include <iostream>

PublicMember::PublicMember(const std::string& id, const std::string& name, const std::string& contactInfo, const std::string& userType, const std::string& password, int membershipID)
    : User(id, name, contactInfo, userType, password), membershipID(membershipID) {}

int PublicMember::getMembershipID() const {
    return membershipID;
}

void PublicMember::setMembershipID(int id) {
    this->membershipID = id;
}

void PublicMember::payMembershipFee() {
    // Implementation for paying the membership fee
}

void PublicMember::printDetails() const {
    User::printDetails();
    std::cout << "Membership ID: " << membershipID << "\n";
}
