#ifndef RETURNRESOURCE_H
#define RETURNRESOURCE_H

#include "Transaction.h"
#include "Database.h"

class ReturnResource : public Transaction {
public:
    ReturnResource(const std::string& userID, Database& db);

    void execute() override;

   ~ReturnResource() override = default;

private:
    Database& database;
};

#endif // RETURNRESOURCE_H
