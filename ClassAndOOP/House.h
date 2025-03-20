// This is telling the preprocessor to skip if defined already. It's also to resolve circular import 
#ifndef HOUSE_H
#define HOUSE_H

#include <string>
using namespace std;

class House {
public:
    House();
    House(int& numStories, int& numWindows, string& color);
    ~House();
    void setNumStories(int numStories);
    void setNumWindows(int numWindows);
    void setColor(string color);
    // The const keywords means this method cannot change any  attribute
    int getNumStories() const;
    int getNumWindows() const;
    string getColor() const;
    void printData() const;

private:
    int numStories;
    int numWindows;
    string color;
};

#endif // HOUSE_H