#include <iostream>
#include "header/Controller.h"

int main() {
    Controller c;
    c.displayMenu();
    c.displayRiver();
    while(true) {
        c.readInput();
    }
    return 0;
}