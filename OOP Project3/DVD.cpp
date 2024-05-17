#include "DVD.h"
#include <iostream>

DVD::DVD(int id, const std::string& title, const std::string& author, bool status, int duration, const std::string& director)
    : LibraryResource(id, title, author, status), duration(duration), director(director) {}

int DVD::getDuration() const {
    return duration;
}

std::string DVD::getDirector() const {
    return director;
}

void DVD::setDuration(int duration) {
    this->duration = duration;
}

void DVD::setDirector(const std::string& director) {
    this->director = director;
}

void DVD::printDetails() const {
    std::cout << "DVD ID: " << getResourceID() << "\n"
              << "Title: " << getTitle() << "\n"
              << "Author: " << getAuthor() << "\n"
              << "Director: " << director << "\n"
              << "Duration: " << duration << " minutes\n"
              << "Available: " << (getAvailabilityStatus() ? "Yes" : "No") << "\n";
}
