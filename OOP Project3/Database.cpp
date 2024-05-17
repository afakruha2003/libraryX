#include "Database.h"
#include "Book.h"
#include "DVD.h"
#include "Magazine.h"
#include "FacultyMember.h"
#include "PublicMember.h"
#include <iostream>

Database::Database() {
    // Add example books
    Book* book1 = new Book(1, "The Great Gatsby", "F. Scott Fitzgerald", true, "First Edition", "Classic");
    Book* book2 = new Book(2, "1984", "George Orwell", true, "Second Edition", "Dystopian");
    addBook(book1);
    addBook(book2);

    // Add example DVDs
    DVD* dvd1 = new DVD(3, "Inception", "Christopher Nolan",true, 148, "Sci-Fi");
    DVD* dvd2 = new DVD(4, "The Matrix", "Wachowski Brothers",true, 136, "Action");
    addDVD(dvd1);
    addDVD(dvd2);

    // Add example magazines
    Magazine* magazine1 = new Magazine(5, "National Geographic", "Various Authors", true, 202, "Science");
    Magazine* magazine2 = new Magazine(6, "Time", "Various Authors", true, 120, "News");
    addMagazine(magazine1);
    addMagazine(magazine2);

    // Add example faculty members
    FacultyMember* faculty1 = new FacultyMember("F001", "John Doe", "johndoe@example.com", "Faculty", "password1", 101);
    FacultyMember* faculty2 = new FacultyMember("F002", "Alice Smith", "alicesmith@example.com", "Faculty", "password2", 102);
    addUser(faculty1);
    addUser(faculty2);

    // Add example public members
    PublicMember* public1 = new PublicMember("P001", "Jane Doe", "janedoe@example.com", "Public", "password3", 201);
    PublicMember* public2 = new PublicMember("P002", "Bob Johnson", "bobjohnson@example.com", "Public", "password4", 202);
    addUser(public1);
    addUser(public2);
}

void Database::addBook(Book* book) {
    books.push_back(book);
}

void Database::addDVD(DVD* dvd) {
    dvds.push_back(dvd);
}

void Database::addMagazine(Magazine* magazine) {
    magazines.push_back(magazine);
}

void Database::removeBook(int id) {
    // Implementation
}

void Database::removeDVD(int id) {
    // Implementation
}

void Database::removeMagazine(int id) {
    // Implementation
}

Book* Database::findBook(int id) {
    for (auto& book : books) {
        if (book->getResourceID() == id) {
            return book;
        }
    }
    return nullptr;
}
DVD* Database::findDVD(int id) {
    for (auto& dvd : dvds) {
        if (dvd->getResourceID() == id) {
            return dvd;
        }
    }
    return nullptr;
}
Magazine* Database::findMagazine(int id) {
    for (auto& magazine : magazines) {
        if (magazine->getResourceID() == id) {
            return magazine;
        }
    }
    return nullptr;
}

void Database::addUser(User* user) {
    users.push_back(user);
}

User* Database::findUser(const std::string& id) {
    for (auto& user : users) {
        if (user->getID() == id) {
            return user;
        }
    }
    return nullptr;
}

bool Database::authenticateUser(const std::string& id, const std::string& password) {
    User* user = findUser(id);
    if (user != nullptr) {
        return user->getPassword() == password;
    }
    return false;
}

void Database::printDetails() const {
    std::cout << "Books:" << std::endl;
    for (const auto& book : books) {
        book->printDetails();
    }

    std::cout << "DVDs:" << std::endl;
    for (const auto& dvd : dvds) {
        dvd->printDetails();
    }

    std::cout << "Magazines:" << std::endl;
    for (const auto& magazine : magazines) {
        magazine->printDetails();
    }

    std::cout << "Users:" << std::endl;
    for (const auto& user : users) {
        user->printDetails();
    }
}
