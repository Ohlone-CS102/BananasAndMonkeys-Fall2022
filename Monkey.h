#include <string>
#include "Banana.h"

#ifndef MONKEY_H
#define MONKEY_H
class Monkey {
private:
    std::string name;
    int energy_level;
    int age;

public:
    Monkey(std::string name);

    //getters
    std::string getName() const;
    int getEnergy() const;
    int getAge() const;
    bool isHungry() const;

    //setters
    void feed(Banana);
    void swing();

};


#endif //MONKEY_H
