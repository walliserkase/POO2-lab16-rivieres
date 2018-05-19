#include <iostream>
#include "header/Controller.h"
#include "src/Menu.h"

int main() {
    Controller c;
    Menu menu(c);
    while(true) {
        menu.display();
    }
    return 0;
}