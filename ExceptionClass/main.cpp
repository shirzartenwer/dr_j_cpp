#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int main() {
    vector<string> names{"Dogs", "Cats", "Mice"};
    cout << "The max size of this vector is " << names.max_size() << endl;

    try {
        names.resize(names.max_size() + 1);
    } 
    catch (const length_error& err) {
        // cerr gives ability to redirect output to different part of console and not affecting cout
        cerr << "Caught an lenght error : " << err.what() << endl;

        // Buffering: cout is buffered, while cerr is unbuffered. This means cerr outputs messages immediately, which is useful for error reporting.
        // Purpose: cout is used for normal program output, while cerr is used for error messages and diagnostics.
        // Redirection: Both cout and cerr can be redirected to different output destinations (e.g., files, other devices). However, they can be redirected independently, 
        // allowing you to separate normal output from error messages.
    }

    
    

    return 0;
}