#include "Book.h"
#include <stdexcept>
Book::Book(string author, string title, string genre, int numPages){
    if (title != "Mein Kempf") {
        this->author = author;
        this->title = title;
        this->genre = genre;
        this->numPages = numPages;
    } else {
        throw runtime_error("This book is a prohibited book for reading. And yes, censorship happens in this small program as well.");
    }


};

string Book::getAuthor() const {
    return author;
};

string Book::getTitle() const {
    return title;
};
string Book::getGenre() const{
    return genre;
};

int Book::getNumPages() const {
    return numPages;
};