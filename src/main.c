#define CNFG_IMPLEMENTATION
#define CNFGOGL
#define HAS_XSHAPE
#define HAS_XINERAMA
#include "include/rawdraw_sf.h"

void HandleKey( int keycode, int bDown ) {}
void HandleButton( int x, int y, int button, int bDown ) { }
void HandleMotion( int x, int y, int mask ) { } 
void HandleDestroy() { }

int main()
{ 
    CNFGSetup( "10011001", 1024, 768 );
    
    while(CNFGHandleInput())
    {
        
        CNFGBGColor = 0x0000ffff; //Dark Blue Background
        short w, h;
        CNFGClearFrame();
        CNFGGetDimensions( &w, &h );
        
        //-----------------------------//
        //          put shit here      //
        //          put shit here      //
        //          put shit here      //
        //-----------------------------//
        
        //Display the image and wait for time to display next frame.
        CNFGSwapBuffers();
        
        usleep(100000);
    }
    
}
