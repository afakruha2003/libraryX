#ifndef FACULTYMEMBER_H
#define FACULTYMEMBER_H

#include "User.h"
#include "LibraryResource.h"

class FacultyMember : public User {
public:
    FacultyMember(const std::string& id, const std::string& name, const std::string& contactInfo, const std::string& userType, const std::string& password, int facultyID);

    int getFacultyID() const;
    void setFacultyID(int facultyID);

    void renewBorrowedItems();
    void reserveResource(LibraryResource& resource);

    void printDetails() const override;

private:
    int facultyID;
};

#endif // FACULTYMEMBER_H
