#ifndef DATABASE_H
#define DATABASE_H

#include <vector>
#include <string>
#include "Book.h"
#include "DVD.h"
#include "Magazine.h"
#include "User.h"

class Database {
public:
    Database();
    void addBook(Book* book);
    void addDVD(DVD* dvd);
    void addMagazine(Magazine* magazine);
    void removeBook(int id);
    void removeDVD(int id);
    void removeMagazine(int id);
    Book* findBook(int id);
    DVD* findDVD(int id);
    Magazine* findMagazine(int id);
    void addUser(User* user);
    User* findUser(const std::string& id);
    bool authenticateUser(const std::string& id, const std::string& password);
    void printDetails() const;

private:
    std::vector<Book*> books;
    std::vector<DVD*> dvds;
    std::vector<Magazine*> magazines;
    std::vector<User*> users;
};

#endif // DATABASE_H
