#ifndef BOOK_H
#define BOOK_H

#include <string>
#include "LibraryResource.h"

class Book : public LibraryResource {
public:
   Book(int id, const std::string& title, const std::string& author, bool available, const std::string& edition, const std::string& genre);
    
    std::string getEdition() const;
    std::string getGenre() const;
    void setEdition(const std::string& edition);
    void setGenre(const std::string& genre);
    void printDetails() const override;
    int getResourceID() const override;

private:
    std::string edition;
    std::string genre;
};

#endif // BOOK_H
