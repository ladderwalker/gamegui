#include "include/gamegui.h"
#include "include/rawdraw_sf.h"



void MainMenu(menustate *m){
    for(int i = 0; i < ITEMS; i++) {
        if(i == m->statecount){
            CNFGColor(0xFF0000FF);//red
        } else {
            CNFGColor(0xFFFFFFFF);//white
        }
        CNFGPenX = 500;
        CNFGPenY = (100 * i) + 50;
        CNFGDrawText(main_menu[i], 4);
    }
}

void set_mstate(int keycode, int bdown, menustate *m) {
    switch( bdown ) {
        case 2: {
            switch(keycode) {
                case 119:{ 
                    if(m->current_state == 1) {
                        m->current_state = m->current_state << 4;
                        m->statecount = 4;
                    } else {
                        m->current_state = m->current_state >> 1;
                        m->statecount--;
                    }
                    break; //w
                }
                case 115: { 
                    if(m->current_state == 16) {
                        m->current_state = m->current_state >> 4;
                        m->statecount = 0;
                    } else {
                        m->current_state = m->current_state << 1;
                        m->statecount++;
                    }
                    break; //w
                }
            }
            break;
        }
        case 1: {
            switch(keycode) {
                case 119:{ 
                    if(m->current_state == 1) {
                        m->current_state <<= 4;
                        m->statecount = 4;
                    } else {
                        m->current_state >>= 1;
                        m->statecount--;
                    }
                    break; //w
                }
                case 115: { 
                    if(m->current_state == 16) {
                        m->current_state >>= 4;
                        m->statecount = 0;
                    } else {
                        m->current_state <<= 1;
                        m->statecount++;
                    }
                    break; //w
                }
            }
            break;
        }
        case 0: {
            
            break;
        }
    }
}

