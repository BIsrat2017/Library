/*
 * Name Bisrat Asefaw
 * Assignement HW1
 * major CSSE
 * date 9/27/19
 *
 * Header File of the class that contains method prints of a Library class
 * that performs adding a book , removing a book ,
 * count number of books , find the book , book is in the library methods .
 */

#ifndef UNTITLED3_LIBRARY_H
#define UNTITLED3_LIBRARY_H

#include <iostream>
#include <string>


int const MAX_NUM_OFBOOKS = 100;


class Library {
public :

    //Library constructor
    // accepts a parameter Library name of the Library
    Library(const std::string &library);

    // Add a new book
    // return true for success, false if book already in library
    bool addBook(const std::string &name);

    // Remove a book,
    // return true for success, false if book not in library
    bool removeBook(const std::string &name);

    //IsInLIbrary
    // Returns true if the book is in library, false otherwise
    bool isInLibrary(const std::string &name);


    //method that returns the number of books in the Library
    int getBookCount() const;

    //Method that prints out the Books in the Library to consule
    //// List all books in library
    void listAllBooks() const;


private:
    //array that used to store the books in the library max number of books 100
    std::string books[MAX_NUM_OFBOOKS];

   // variable to keep track of how many books are in the library
    int numOfBooks;

    //Helper method that returns the position of the Book in the Book Array
    int findBook(const std::string &name);

};


#endif //UNTITLED3_LIBRARY_H
