#ifndef VIEWDETAILS_H
#define VIEWDETAILS_H

#include "Transaction.h"
#include "Database.h"

class ViewDetails : public Transaction {
public:
    ViewDetails(const std::string& userID, Database& db);

    void execute() override;

    ~ViewDetails() override = default;
    
private:
    Database& database;
};

#endif // VIEWDETAILS_H
