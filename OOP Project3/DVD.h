#pragma once
#include "LibraryResource.h"
#include <string>

class DVD : public LibraryResource {
public:
    DVD(int id, const std::string& title, const std::string& author, bool status, int duration, const std::string& director);

    int getDuration() const;
    std::string getDirector() const;
    void setDuration(int duration);
    void setDirector(const std::string& director);
    void printDetails() const override;

private:
    int duration;
    std::string director;
};
