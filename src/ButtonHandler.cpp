#include "ButtonHandler.h"

ButtonHandler::ButtonHandler() {
    //ctor
    currentbuttoncnt = 0;
}

void ButtonHandler::SetGFXLib(GFX_Lib *gfx) {
    g = gfx;
}

void ButtonHandler::AddButton(Button b) {
    buttons.push_back(b);
}

uint8_t ButtonHandler::ReplaceButton(string id, Button b){
    uint32_t n;
    for(n = 0; n<buttons.size();n++){
        if(buttons[n].GetID() == id){
            buttons[n] = b;
            break;
        }
    }

    //Unsuccessful
    if(n == buttons.size()) return 0;

    //Success
    return 1;
}

void ButtonHandler::Render(void) {
    for(auto b: buttons) {
        g->SetBkgCol(b.GetBkgCol());
        g->SetLineCol(b.GetLineCol());
        g->SetFillCol(b.GetFillCol());
        g->SetTxtCol(b.GetTxtCol());
        g->DrawFillRectangle(b.GetXpos()-4, b.GetYpos()-4, b.GetXpos()+b.GetWidth()+4, b.GetYpos()+b.GetHeight()+4, 4);
        g->PStr(b.GetText(), b.GetXpos(), b.GetYpos(), b.GetTextSize());
    }
}



string ButtonHandler::IsPressed(SDL_Event *ev) {
    bool xl, xr, yt, yb;
    string bid = "";
    xl = ev->button.x > (buttons.at(currentbuttoncnt).GetXpos()-8);
    xr = ev->button.x < (buttons.at(currentbuttoncnt).GetXpos()+buttons[currentbuttoncnt].GetWidth()+8);

    yt = ev->button.y > (buttons.at(currentbuttoncnt).GetYpos()-8);
    yb = ev->button.y < (buttons.at(currentbuttoncnt).GetYpos()+buttons[currentbuttoncnt].GetHeight()+8);

    bid = buttons.at(currentbuttoncnt).GetID();
    currentbuttoncnt++;
    //Button clicked
    if(xl && xr && yt && yb) return bid;

    //Button not clicked
    return string("");
}

uint8_t ButtonHandler::ButtonsAvailable(void) {
    if(currentbuttoncnt == buttons.size()) {
        currentbuttoncnt = 0;
        return 0;
    }
    return 1;
}
