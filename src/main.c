#define CNFG_IMPLEMENTATION
#define CNFGOGL
#define HAS_XSHAPE
#define HAS_XINERAMA
#include "include/rawdraw_sf.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "include/gamegui.h"

menustate ms = { 0 };
menustate *mmstate = &ms;



void HandleKey( int keycode, int bDown ) {
    set_mstate(keycode, bDown, mmstate);
}
void HandleButton( int x, int y, int button, int bDown ) { }
void HandleMotion( int x, int y, int mask ) { } 
void HandleDestroy() { }
int main()
{ 
    mmstate->current_state = 1;
    CNFGSetup( "GameGUI", 1024, 768 );
    
    while(CNFGHandleInput())
    {
        CNFGBGColor = 0x000000ff; //Dark Blue Background
        short w, h;
        CNFGClearFrame();
        CNFGGetDimensions( &w, &h );
        MainMenu(mmstate);
        CNFGSwapBuffers();
        usleep(60000);
    }
    
}