#ifndef BORROWRESOURCE_H
#define BORROWRESOURCE_H

#include "Transaction.h"
#include "Database.h"

class BorrowResource : public Transaction {
public:
    BorrowResource(const std::string& userID, Database& db);

    void execute() override;

      ~BorrowResource() override = default;

private:
    Database& database;
};

#endif // BORROWRESOURCE_H
