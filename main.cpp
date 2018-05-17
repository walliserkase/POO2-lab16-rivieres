#include <iostream>
#include "header/Controller.h"
#include "src/Menu.h"

int main() {
    Controller c;
    Menu menu(c);
    menu.display();
    return 0;
}