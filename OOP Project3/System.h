#ifndef SYSTEM_H
#define SYSTEM_H

#include "Database.h"

class System {
public:
    System();
    void run();

private:
    bool userAuthenticated;
    std::string currentUserID;
    Database database;

    void authenticateUser();
    void performTransactions();
};

#endif // SYSTEM_H
