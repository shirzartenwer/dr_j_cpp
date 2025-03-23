#ifndef ANGRY_CAT_EXCEPTION_H
#define ANGRY_CAT_EXCEPTION_H

#include <stdexcept>
#include <string>
using namespace std;


// runtime error is the two major children of the Exception class
class AngryCatException : public runtime_error
{
    public:
        // There must be a curly bracket in the end, even though nothing inside that bracket  
        AngryCatException() : runtime_error("Made kitty angry!"){}
        AngryCatException(const string& message) : runtime_error(message){}
};


#endif 