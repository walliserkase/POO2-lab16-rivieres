#include <iostream>
#include "header/Controller.h"

int main() {
    Controller c;
    c.displayMenu();
    while(true) {
        c.displayRiver();
        c.readInput();
    }
    return 0;
}