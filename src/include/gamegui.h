/* date = November 2nd 2022 11:35 pm */

#ifndef GAMEGUI_H
#define GAMEGUI_H
#include <stdint.h>     
typedef struct {
    uint8_t current_state;
    int statecount;
} menustate;


static char *main_menu[] = {
    "New Game",
    "Save Game",
    "Load Game",
    "Options",
    "Quit",
};


void MainMenu();

void set_mstate(int keycode, int bdown, menustate *m);

#endif //GAMEGUI_H