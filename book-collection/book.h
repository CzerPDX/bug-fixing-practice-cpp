#pragma once

#include <string>
#include <vector>

class Book {
public:
    Book(const std::string& title, const std::string& author, int year);
    std::string getTitle() const;
    std::string getAuthor() const;
    int getYear() const;
private:
    std::string title;
    std::string author;
    int year;
};

class BookCollection {
public:
    void addBook(const Book& book);
    bool removeBooks(const std::string& title);
    std::vector<Book> getBooksByAuthor(const std::string& author) const;
    std::vector<Book> getBooksByYear(int year) const;
private:
    std::vector<Book> books;
};
