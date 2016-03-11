#ifndef BUTTONHANDLER_H
#define BUTTONHANDLER_H

#include "Button.h"
#include "GFX_Lib.h"
#include "SDL.h"

#include <vector>

class GFX_Lib;

class ButtonHandler
{
    public:
        ButtonHandler();
        void SetGFXLib(GFX_Lib *gfx);
        void AddButton(Button b);

        uint8_t ReplaceButton(string id, Button b);
        void Render(void);

        string IsPressed(SDL_Event *ev);
        uint8_t ButtonsAvailable(void);

    private:
        vector<Button> buttons;
        GFX_Lib *g;
        uint32_t currentbuttoncnt;
};

#endif // BUTTONHANDLER_H
