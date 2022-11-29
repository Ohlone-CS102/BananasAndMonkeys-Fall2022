#include "Monkey.h"

Monkey::Monkey(std::string name) {
    this->name = name;
    this->energy_level = 100;
    this->age = 2;
}

std::string Monkey::getName() const {
    return name;
}

int Monkey::getEnergy() const {
    return energy_level;
}

int Monkey::getAge() const {
    return age;
}

bool Monkey::isHungry() const {
    return (energy_level < 75);
}

void Monkey::feed(Banana banana) {
    if (banana.getColor() == "yellow") {
        this->energy_level += banana.getCalories();
    }
}

void Monkey::swing() {
    this->energy_level -= 50;
}