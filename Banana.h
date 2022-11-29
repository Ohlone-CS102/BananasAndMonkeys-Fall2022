#include <string>
#ifndef BANANA_H
#define BANANA_H


class Banana {
private:
    std::string color;
    int calories;

public:
    // constructor
    Banana();

    // getters
    std::string getColor() const;
    int getCalories() const;

    //setters
    void setColor(std::string color);
    void setCalories(int calories);
    void ripen();

};


#endif //BANANA_H
