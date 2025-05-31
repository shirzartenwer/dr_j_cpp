#include "Dictionary.h"
#include <map>
#include <string>
#include <iostream>


Dictionary::Dictionary(){
    map<string, string> dict;
    this->dict = dict;
};

Dictionary::~Dictionary(){};

void Dictionary::addDefinition(string word, string definition){
    auto it = this->dict.find(word);

    if(it == dict.end()){
        this->dict[word] = definition;
    } else {
        // key is already there,updating definition;
        it->second = definition;
    }

};

string Dictionary::getDefinition(string word){
    auto it= this->dict.find(word);
    if (it==this->dict.end()){
        return "NOT FOUND";
    } else {
        return it->second;
    }
};
void Dictionary::printAll(){
    for (auto pair:this->dict){
        cout << "The key and value pair at position " << pair.first << "\t" << pair.second << endl;
    }
};