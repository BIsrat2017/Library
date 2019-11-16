/*
 * Name Bisrat Asefaw
 * Assignement HW1
 * date 9/27/19
 *
 * Test class for the Library Class
 */

#include <iostream>
#include "Library.h"
#include <cassert>


int test1() {
    Library libs("UWB");
    libs.addBook("In Search of Lost Time");
    libs.addBook("Ulysses");
    libs.addBook("The Obyssey");
    libs.listAllBooks();

    //test for isInLibrary returns true if the boook is in library
    bool result = libs.isInLibrary("The Obyssey");
    assert(result);

    // Test for add book returns false because the book is already in the library
    result = libs.addBook("The Obyssey");
    assert(!result);

    //Test for remove book retruns true because the book is in library
    result = libs.removeBook("The Obyssey");
    assert(result);


    //test that checks is the book is in the Library
    result = libs.isInLibrary("The Obyssed");
    assert(!result);

    //Test for remove Last book added returns false because the book is not in the library
    result = libs.removeBook("The Obyssed");
    assert(!result);
    return 0;
}

int test2() {
    Library library("NSCC");
    library.addBook("Software Engineering");
    library.addBook("Data Structure and algorithm");
    library.addBook("JAVA");
    library.addBook("English composition");
    library.addBook("non");

    library.listAllBooks();

    //test for isInLibrary returns true if the boook is in library
    bool result = library.isInLibrary("JAVA");
    assert(result);

    // Test for add book returns false because the book is already in the library
    result = library.addBook("JAVA");
    assert(!result);

    //Test for remove book retruns true because the book is in library
    result = library.removeBook("JAVA");
    assert(result);

    //
    //Test for book is in the library returns false because the book is already removed
    result = library.isInLibrary("JAVA");
    assert(!result);

    //Test for remove book returns false because the book is not in the library
    result = library.removeBook("JAVA");
    assert(!result);


    //Test for remove Last book added returns false because the book is not in the library
    result = library.removeBook("non");
    assert(result);
    return 0;
}

void TestAll() {
    test1();
    test2();
    std::cout << "Successfully completed all testes. " << std::endl;
}

int main() {
    TestAll();
    return 0;
}