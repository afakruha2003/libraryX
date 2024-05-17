#pragma once
#include "LibraryResource.h"
#include <string>

class Magazine : public LibraryResource {
public:
    Magazine(int id, const std::string& title, const std::string& author, bool status, int issueNumber, const std::string& publisher);

    int getIssueNumber() const;
    std::string getPublisher() const;
    void setIssueNumber(int issueNumber);
    void setPublisher(const std::string& publisher);
    void printDetails() const override;

private:
    int issueNumber;
    std::string publisher;
};
