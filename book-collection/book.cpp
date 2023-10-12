#include "book.h"

Book::Book(const std::string& title, const std::string& author, int year) {
    this->title = title;
    this->author = author;
    this->year = year;
}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

int Book::getYear() const {
    return year;
}

void BookCollection::addBook(const Book& book) {
    books.push_back(book);
}

bool BookCollection::removeBook(const std::string& title) {
    for (size_t i = 0; i < books.size(); ++i) {
        if (books[i].getTitle() == title) {
            books.erase(books.begin() + i);
            return true;
        }
    }
    return false;
}

std::vector<Book> BookCollection::getBooksByAuthor(const std::string& author) const {
    std::vector<Book> result;
    for (const auto& book : books) {
        if (book.getAuthor() == author) {
            result.push_back(book);
        }
    }
    return result;
}

std::vector<Book> BookCollection::getBooksByYear(int year) const {
    std::vector<Book> result;
    for (const auto& book : books) {
        if (book.getYear() == year) {
            result.push_back(book);
        }
    }
    return books;
}
