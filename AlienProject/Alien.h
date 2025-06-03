#ifndef ALIEN_H
#define ALIEN_H

#include <string>
#include <iostream>

class Alien {
    public:
        Alien(int weight, int height, char gender);
        int getWeight() const;
        int getHeight() const;
        char getGender() const;
        int getPriestige() const;

        Alien operator+(const Alien& other) const;
        bool operator==(const Alien& other) const;
        bool operator!=(const Alien& other) const;
        bool operator>(const Alien& other) const;
        bool operator>=(const Alien& other) const;
        bool operator<(const Alien& other ) const;
        bool operator<=(const Alien& other) const;
        void operator= (const Alien& other);

    private:
        int weight;
        int height;
        char gender;

};



#endif