#include <iostream>
#include "Banana.h"
#include "Monkey.h"

using namespace std;

int main() {

    Banana first = Banana();
    Banana brown = Banana();
    brown.setColor("brown");

    cout << "First Banana is " << first.getColor() << endl;
    first.ripen();
    cout << "First Banana is " << first.getColor() << endl;

    cout << "Brown Banana is " << brown.getColor() << endl;

    Monkey bobo = Monkey("Bobo");
    Monkey george = Monkey("George");

    cout << bobo.getName() << " ";
    if (bobo.isHungry()) {
        cout << "is Hungry."<< endl;
    } else {
        cout << "is not Hungry." << endl;
    }

    bobo.swing();
    cout << bobo.getName() << " ";
    if (bobo.isHungry()) {
        cout << "is Hungry."<< endl;
    } else {
        cout << "is not Hungry." << endl;
    }

    bobo.feed(brown);
    cout << bobo.getName() << " ";
    if (bobo.isHungry()) {
        cout << "is Hungry."<< endl;
    } else {
        cout << "is not Hungry." << endl;
    }

    bobo.feed(first);
    cout << bobo.getName() << " ";
    if (bobo.isHungry()) {
        cout << "is Hungry."<< endl;
    } else {
        cout << "is not Hungry." << endl;
    }

    return 0;
}
