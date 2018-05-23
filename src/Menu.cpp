/*
 * Laboratoire 16, Rivière
 *
 * Joël Kaufmann
 * Alexandre Vouilloz
 *
 * Date : 24.05.2018
 */

#include <iostream>
#include "../header/Menu.h"

using namespace std;

Menu::Menu(Controller &controller) : controller_(controller) {}

/**
 * Display interface and read user input
 */
void Menu::display() const {
    cout << "p\t: afficher" << endl;
    cout << "e <nom>\t: embarquer <nom>" << endl;
    cout << "d <nom>\t: debarquer <nom>" << endl;
    cout << "m\t: deplacer bateau" << endl;
    cout << "r\t: reinitialiser" << endl;
    cout << "q\t: quitter" << endl << endl;
    controller_.display();
    controller_.readInput();
}