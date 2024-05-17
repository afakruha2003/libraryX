#ifndef PUBLICMEMBER_H
#define PUBLICMEMBER_H

#include "User.h"
#include "LibraryResource.h"

class PublicMember : public User {
public:
    PublicMember(const std::string& id, const std::string& name, const std::string& contactInfo, const std::string& userType, const std::string& password, int membershipID);

    int getMembershipID() const;
    void setMembershipID(int id);

    void payMembershipFee();

    void printDetails() const override;

private:
    int membershipID;
};

#endif // PUBLICMEMBER_H
