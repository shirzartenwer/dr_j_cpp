#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <map>
#include <string>
using namespace std;

class Dictionary {
    public:
        Dictionary();
        ~Dictionary();
        void addDefinition(string word, string definition);
        string getDefinition(string word);
        void printAll();


    private:
        map<string, string> dict;


};


#endif