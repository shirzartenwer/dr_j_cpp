#include "Dictionary.h"
#include <iostream>


void promptAddNewWord(Dictionary& dict);
string promptWordLookUp(Dictionary&dict);

int main(){
    Dictionary new_dict;
    int choice;
    cout << "Hello, you have a dictionary now. Choose what you want to do: " << endl;
    cout << "1-Add a new word or definition." << endl;
    cout << "2-Get the definition for a word." << endl;
    cout << "3. Print all definitions." << endl;
    cout << "0. Exit the program." << endl;
    cin >> choice;
    cin.ignore();

    if (choice==1){
        promptAddNewWord(new_dict);
    } else if (choice == 2){
        cout << promptWordLookUp(new_dict);
    } else if (choice==3){
        new_dict.printAll();
    } while (choice !=0);

    return 0;
}

void promptAddNewWord(Dictionary& dict){
    string word;
    string definition;
    cout << "Enter your word: " << endl;
    cin >> word;
    cin.ignore();
    cout << "Enter your definition: " << endl;
    cin >> definition;
    cin.ignore();
    dict.addDefinition(word, definition);
};

string promptWordLookUp(Dictionary&dict){
    string word;
    cout << "Enter your word: " << endl;
    cin >> word;
    cin.ignore();

    return dict.getDefinition(word);

};