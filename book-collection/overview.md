# Original description
The goal of this application is to maintain a collection of books. The application should be able to:

- Add a book with its title, author, and year of publication.
- Remove a book by its title.
- Retrieve a list of all books by a specific author.
- Retrieve a list of all books published in a specific year.

However, when the previous developer wrote the application, they introduced several bugs. Your task in this exercise is to identify and fix these bugs.

# My notes
- BookCollection::getBooksByYear returns the list of books instead of result. Updated it to return the result instead.

# My questions:
- When removing a book by title, is there expected to be only one book by that title?
Answer: no, there might be multiple books by that tile. Removing a book would require removing all books by that title not just one.