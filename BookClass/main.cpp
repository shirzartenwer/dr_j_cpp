#include <iostream>
#include "Book.h"
#include <stdexcept>
using namespace std;

int main () {
    Book myFavBook("Nassim Taleb", "Skin in the game", "non-fiction",350);

    cout << "My favourite book is " << myFavBook.getTitle() << endl;
    
    // note that the exception needs to be catched, otherwise program will abort, if you directly do 
    // Book myNextBoook("Hilter", "Mein Kempf", "biography", 500) without the try and catch
    try {
        Book myNextBoook("Hilter", "Mein Kempf", "biography", 500);
    }
    catch (const runtime_error& err){
        cerr<< err.what() << endl;
    }
    

    return 0;
}