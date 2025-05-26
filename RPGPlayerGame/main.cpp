#include <iostream>
#include "Player.h"
#include "Warrior.h"
#include "Priest.h"
#include "Mage.h"
using namespace std;

string printRace(Race race);

int main() {
    int numChar;
    cout << "Welcome to this game, how many characters will be in this game? "<< endl;
    cin >> numChar;
    vector<Player*> gameCharacters;

    for (int i =0; i < numChar; i++){
        Player* new_player = nullptr;
        string profession;
        cout << "Please choose the profession of the character by entering the correspondent number: " << endl;
        cout << "A: Warrior" << endl << "B: Priest" << endl << "C: Mage" << endl;
        cin >> profession;
        cin.ignore();


        int numRace;
        cout <<"Please choose the race of your character, by entering the number: " << endl;
        cout << "1. Human" << endl << "2. ELF" << endl << "3. DWARF" << endl << "4. ORC" << endl << "5. TROLL" << endl;
        cin >> numRace;
        cin.ignore();

        Race race;
        if (numRace==1){
            race = HUMAN;
        } else if (numRace==2)
        {
            race = ELF;
        } else if (numRace==3)
        {
            race = DWARF;
        } else if (numRace==4)
        {
            race = ORC;
        } else if (numRace==5)
        {
            race = TROLL;
        }

        string charName; 
        cout <<"Please enter a name to this character: " << endl;
        cin >> charName;
        cin.ignore();

        if (profession=="A"){
            new_player = new Warrior(charName, race);
            gameCharacters.push_back(new_player);
        } else if (profession=="B"){
            new_player = new Priest(charName, race);
            gameCharacters.push_back(new_player);
        } else if (profession=="C"){
            new_player = new Mage(charName, race);
            gameCharacters.push_back(new_player);
        }
    }

    for (int i = 0; i<numChar; i++){
        cout << "I am " << printRace(gameCharacters[i]->getRace()) << " and my attack is " << gameCharacters[i]->attack() << endl;
    }

    for (Player* player : gameCharacters){
        delete player;
    }
    gameCharacters.clear();


    return 0;
}

string printRace(Race race) {
    if (race==0){
        return "HUMAN";
    } else if (race==1)
    {
        return "ELF";
    } else if (race==2)
    {
        return "DWARF";
    } else if (race==3){
        return "ORC";
    } else {
        return "TROLL";
    }

};