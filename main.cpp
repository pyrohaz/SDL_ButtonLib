#ifdef __cplusplus
#include <cstdlib>
#include <iostream>
#else
#include <stdlib.h>
#endif

#include "SDL.h"
#include "GFX_Lib.h"
#include "ButtonHandler.h"

using namespace std;


#define WHITE   SDL_MapRGBA(g.PxFmt(), 255, 255, 255, 0)
#define BLACK   SDL_MapRGBA(g.PxFmt(), 0, 0, 0, 0)
#define RED     SDL_MapRGBA(g.PxFmt(), 255, 0, 0, 0)
#define BLUE    SDL_MapRGBA(g.PxFmt(), 0, 0, 255, 0)
#define GREEN   SDL_MapRGBA(g.PxFmt(), 0, 255, 0, 0)

int main ( int argc, char** argv ) {
    bool finished = false;
    SDL_Window *win;
    SDL_Surface *s;
    SDL_Texture *tx;
    SDL_Renderer *rnd;
    SDL_Event ev;
    GFX_Lib g;
    ButtonHandler bh;

    if ( SDL_Init( SDL_INIT_VIDEO ) != 0 ) {
        return 1;
    }

    s = SDL_CreateRGBSurface(0, 800, 600, 32, 0, 0, 0, 0);
    if(s == nullptr) {
        SDL_Quit();
        return 1;
    }

    g.setSurface(s);

    win = SDL_CreateWindow("Buttons", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN);
    if (win == nullptr) {
        SDL_Quit();
        return 1;
    }

    bh.SetGFXLib(&g);
    bh.AddButton(Button("btn1", 0, 0, GREEN, WHITE, RED, BLACK, 1, "Button"));
    bh.AddButton(Button("btn2", 100, 10, GREEN, WHITE, RED, BLACK, 2, "Another Button"));
    bh.AddButton(Button("btn3", 100, 100, GREEN, WHITE, RED, BLACK, 2, "Final Button"));

    rnd = SDL_CreateRenderer(win, -1, 0);

    g.SetTxtCol(SDL_MapRGBA(g.PxFmt(), 0, 0, 0, 0));
    g.SetBkgCol(SDL_MapRGBA(g.PxFmt(), 255, 255, 255, 0));
    g.SetScrnCol(SDL_MapRGBA(g.PxFmt(), 0, 0, 0, 0));

    while(!finished) {
        g.DrawBMPFN("C:/Users/Haz/Documents/SDL Projects/ButtonLib/lnd.bmp", 0, 0, 0.25);
        g.DrawBMPFN("C:/Users/Haz/Documents/SDL Projects/ButtonLib/lnd.bmp", 100, 100, 0.5);
        g.DrawBMPFN("C:/Users/Haz/Documents/SDL Projects/ButtonLib/lnd.bmp", 300, 300, 1);
        bh.Render();
        tx = SDL_CreateTextureFromSurface(rnd, s);
        SDL_RenderCopy(rnd, tx, NULL, NULL);
        SDL_RenderPresent(rnd);
        g.Clear();

        SDL_WaitEvent(&ev);
        switch(ev.type) {
        case SDL_QUIT:
            finished = true;
            break;
        case SDL_MOUSEBUTTONDOWN:
            string btn = "";
            while(bh.ButtonsAvailable()) {
                btn = bh.IsPressed(&ev);
                if(btn == "btn1") {
                    cout << "Button 1 pressed" << endl;
                } else if(btn == "btn2") {
                    cout << "Button 2 pressed" << endl;
                } else if(btn == "btn3") {
                    cout << "Button 3 pressed" << endl;
                }
            }
            break;
        }
    }

    SDL_FreeSurface(s);
    SDL_DestroyTexture(tx);
    SDL_DestroyRenderer(rnd);
    SDL_DestroyWindow(win);

    return 0;
}

