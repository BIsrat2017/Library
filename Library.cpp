/*
 * Name Bisrat Asefaw
 * Assignement HW1
 * date 9/27/19
 *
 * Compilation unit of the class that contains method prints of a Library class
 * that performs adding a book , removing a book ,
 * count number of books , find the book , book is in the library methods .
 */

#include "Library.h"

//Library constructor
// accepts a parameter Library name of the Library
Library::Library(const std::string &library) {
    numOfBooks = 0;
    books[numOfBooks] = library;
    numOfBooks++;
}

int Library::getBookCount() const {
    return numOfBooks;
}

//IsInLIbrary
// Returns true if the book is in library, false otherwise
bool Library::isInLibrary(const std::string &name) {
    for (int i = 0; i < numOfBooks; i++) {
        if (books[i] == name) {
            return true;
        }
    }
    return false;
}

//Method that adds book to the Library array
//the method returns true if book is added sucessfully
//else returns false
//the method returns false if the MAX_NUM_OFBOOKS reaches its max (MAX_NUM_OFBOOKS)
bool Library::addBook(const std::string &name) {
    if (numOfBooks >= MAX_NUM_OFBOOKS) {
        return false;
    }
    if (!isInLibrary(name)) {
        books[numOfBooks] = name;
        numOfBooks++;
        return true;
    } else {
        return false;
    }

}

// Remove a book,
// return true for success, false if book not in library
bool Library::removeBook(const std::string &name) {
    if (!isInLibrary(name)) {
        return false;
    } else {
        int i = findBook(name);
        books[i] = books[numOfBooks - 1];
        numOfBooks--;
        return true;
    }
}

//Method that prints out the Books in the Library to consule
//// List all books in library
void Library::listAllBooks() const {
    std::cout << "Books In the Library of " << books[0] << " are: ";
    for (int i = 1; i < numOfBooks; i++) {
        std::cout << books[i] + ", ";
    }
    std::cout << "\n";
}

//Find the Position of the Book in the array
//retruns the position of the book in the array,
// returns -1 is the book is not in the array
int Library::findBook(const std::string &name) {
    if (!isInLibrary(name)) {
        return -1;
    } else {
        int i = 0;
        while (name != books[i]) {
            i++;
        }
        return i;
    }
}

//friend function
std::ostream &operator<<(std::ostream &out, const Library lib);
