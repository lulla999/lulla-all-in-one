#include <iostream>
#include <string>

// Base Class
class Person {
private:
    std::string name;
    int age;

public:
    // Member function to input person details
    void getPersonData() {
        std::cout << "Enter Name: ";
        std::getline(std::cin >> std::ws, name); // std::ws clears leading whitespaces
        std::cout << "Enter Age: ";
        std::cin >> age;
    }

    // Member function to display person details
    void showPersonData() const {
        std::cout << "Name: " << name << "\n";
        std::cout << "Age: " << age << "\n";
    }
};

// Derived Class using Private Derivation
class Author : private Person {
private:
    std::string genre;
    int booksPublished;

public:
    // Member function to input author details
    void getAuthorData() {
        // Since inheritance is private, we call the base class methods inside the derived class
        getPersonData(); 
        
        std::cout << "Enter Genre: ";
        std::getline(std::cin >> std::ws, genre);
        std::cout << "Enter Number of Books Published: ";
        std::cin >> booksPublished;
    }

    // Member function to display author details
    void showAuthorData() const {
        std::cout << "\n--- Author Information ---\n";
        // Call the private base class method to show inherited properties (Name & Age)
        showPersonData(); 
        std::cout << "Genre: " << genre << "\n";
        std::cout << "Books Published: " << booksPublished << "\n";
    }
};

int main() {
    Author myAuthor;

    std::cout << "Reading Author Details:\n";
    myAuthor.getAuthorData();

    myAuthor.showAuthorData();

    // Note: Attempting to call myAuthor.getPersonData(); here would fail to compile
    // because Person is privately inherited by Author.

    return 0;
}