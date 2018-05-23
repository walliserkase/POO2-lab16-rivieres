/*
 * Laboratoire 16, Rivière
 *
 * The Menu interacts with the user, displaying commands
 * and taking inputs from the console
 *
 * Joël Kaufmann
 * Alexandre Vouilloz
 *
 * Date : 24.05.2018
 */


#ifndef LAB_16_RIVIERE_MENU_H
#define LAB_16_RIVIERE_MENU_H

#include "Controller.h"

class Menu {
private:
    Controller& controller_; // controller used in the program
public:
    /**
     * Constructor
     * @param controller the controller that is used in the program
     */
    Menu(Controller& controller);

    /**
     * Display commands to user
     */
    void display() const;
};


#endif //LAB_16_RIVIERE_MENU_H
