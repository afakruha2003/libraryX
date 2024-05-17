#pragma once
#include <string>

class LibraryResource {
public:
    LibraryResource(int id, const std::string& title, const std::string& author, bool available);

    virtual void printDetails() const = 0;
    virtual int getResourceID() const;
    std::string getTitle() const;
    std::string getAuthor() const;
    bool getAvailabilityStatus() const;
    void setAvailabilityStatus(bool status);  // Add this method

protected:
    int resourceID;
    std::string title;
    std::string author;
    bool available;
};
