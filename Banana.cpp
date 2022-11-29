
#include "Banana.h"


Banana::Banana() {
    color = "green";
    calories = 105;
}

std::string Banana::getColor() const {
    return color;
}

int Banana::getCalories() const {
    return calories;
}

void Banana::setColor(std::string color) {
    if (color == "brown" ||
    color == "yellow" ||
    color == "green") {
        this->color = color;
    }
}

void Banana::setCalories(int calories) {
    this->calories = calories;
}

void Banana::ripen() {
    if (color == "green") {
        color = "yellow";
    } else if (color == "yellow") {
        color = "brown";
    } else {
        color = "brown";
    }
}