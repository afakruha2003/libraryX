#include "LibraryResource.h"

LibraryResource::LibraryResource(int id, const std::string& title, const std::string& author, bool available)
    : resourceID(id), title(title), author(author), available(available) {}

int LibraryResource::getResourceID() const {
    return resourceID;
}

std::string LibraryResource::getTitle() const {
    return title;
}

std::string LibraryResource::getAuthor() const {
    return author;
}

bool LibraryResource::getAvailabilityStatus() const {
    return available;
}

void LibraryResource::setAvailabilityStatus(bool status) {
    available = status;
}
