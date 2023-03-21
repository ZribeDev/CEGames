#include <ti/screen.h>
#include <ti/getcsc.h>
#include <stdlib.h>
#include <graphx.h>
#include <gfx/gfx.h>
#include "optix.h"
void PrintCentered(const char *str);

/* Main function, called first */
int main(void)
{

    /* Clear the homescreen */
    os_ClrHome();
    gfx_Begin();    
    gfx_SetPalette(global_palette, sizeof_global_palette, 0);
    // os_PutStrFull("Hello, World.");
    // while (!os_GetCSC());
    
    

    gfx_SetTextFGColor(6);
    gfx_SetTextBGColor(0);
    gfx_SetTextTransparentColor(5);
    gfx_SetDrawBuffer();
    /* Enable text clipping */
    gfx_SetTextConfig(gfx_text_clip);
    gfx_SetMonospaceFont(8);

    /* Draw to buffer to avoid flicker */
    gfx_SetDrawBuffer();
    
    gfx_FillScreen(0);
    // DRAW LINE
    gfx_SetColor(148);
    int i1 = 0;
    while (i1 <= 240) {
        gfx_FillRectangle(50, i1, 2, 2);
        i1 = i1 + 1;
    }
    gfx_FillRectangle(51,215,500,2);
    gfx_Sprite(pfp, 70, 80);
    gfx_Sprite(pfp, 10, 5);
    // DRAW LINE - END
    gfx_PrintStringXY("CLIPPED TXTEEEE", 70,50);
    optix_Message("Hi", "hello world", 10, 250, 4);
    char optixmsg = optix_GetStringInput("Message", 10, 500, 15);
    gfx_BlitBuffer();






    
    while (!os_GetCSC());
    gfx_End();  
    
    

    /* Return 0 for success */
    return 0;
}


