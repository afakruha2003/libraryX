#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "Transaction.h"

class User {
public:
    User(const std::string& id, const std::string& name, const std::string& contactInfo, const std::string& userType, const std::string& password);
    std::string getID() const;
    std::string getName() const;
    std::string getContactInfo() const;
    std::string getUserType() const;
    std::string getPassword() const;
    const std::vector<Transaction*>& getBorrowingHistory() const;
    void setID(const std::string& id);
    void setName(const std::string& name);
    void setContactInfo(const std::string& contactInfo);
    void setUserType(const std::string& userType);
    void setPassword(const std::string& password);
    void addTransaction(Transaction* transaction);
    void removeTransaction(Transaction* transaction);
    virtual void printDetails() const;

private:
    std::string id;
    std::string name;
    std::string contactInfo;
    std::string userType;
    std::string password;
    std::vector<Transaction*> borrowingHistory;
};

#endif // USER_H
