#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

class Transaction {
public:
    Transaction(const std::string& userID);

    // Getters
    std::string getUserID() const;

    // Virtual function to execute the transaction
    virtual void execute() = 0;

    // Overload the equality operator
    bool operator==(const Transaction& other) const;

    // Virtual destructor
    virtual ~Transaction()= default;

private:
    std::string userID;
};

#endif // TRANSACTION_H
