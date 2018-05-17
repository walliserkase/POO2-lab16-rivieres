#include <iostream>
#include "Menu.h"

using namespace std;

Menu::Menu(Controller &controller) : controller_(controller) {}

void Menu::display() const {
    cout << "p\t: afficher" << endl;
    cout << "e <nom>\t: embarquer <nom>" << endl;
    cout << "d <nom>\t: debarquer <nom>" << endl;
    cout << "m\t: deplacer bateau" << endl;
    cout << "r\t: reinitialiser" << endl;
    cout << "q\t: quitter" << endl << endl;
    controller_.display();
}