#include <iostream>
#include "book.h"

int main() {
    BookCollection library;
    library.addBook(Book("To Kill a Mockingbird", "Harper Lee", 1960));
    library.addBook(Book("1984", "George Orwell", 1949));
    library.addBook(Book("The Great Gatsby", "F. Scott Fitzgerald", 1925));
    library.addBook(Book("Brave New World", "Aldous Huxley", 1932));

    auto booksByOrwell = library.getBooksByAuthor("George Orwell");
    if (booksByOrwell.size() != 1) {
        std::cout << "Bug: Expected 1 book by George Orwell, found " << booksByOrwell.size() << std::endl;
    }

    auto booksFrom1932 = library.getBooksByYear(1932);
    if (booksFrom1932.size() != 1) {
        std::cout << "Bug: Expected 1 book from 1932, found " << booksFrom1932.size() << std::endl;
    }

    bool removed = library.removeBook("1984");
    if (!removed) {
        std::cout << "Bug: Failed to remove '1984'." << std::endl;
    }

    return 0;
}
