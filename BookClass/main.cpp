#include <iostream>
#include "Book.h"
using namespace std;

int main () {
    Book myFavBook("Nassim Taleb", "Skin in the game", "non-fiction",350);

    cout << "My favourite book is " << myFavBook.getTitle() << endl;
    return 0;
}