#ifndef BUTTON_H
#define BUTTON_H

#include <string>
#include "SDL.h"
#include "GFX_Lib.h"

using namespace std;

class Button
{
    public:
        Button();
        Button(string idi, int32_t xp, int32_t yp, uint32_t lcol, uint32_t fcol, uint32_t bcol, uint32_t tcol, float tsize, string txt);
        ~Button();

        Button& operator=(const Button &src);

        void SetXpos(int32_t xp){ xpos = xp; }
        void SetYpos(int32_t yp){ ypos = yp; }
        void SetLineCol(uint32_t lc){ linecol = lc; }
        void SetBkgCol(uint32_t bc){ bkgcol = bc; }
        void SetTxtCol(uint32_t tc){ txtcol = tc; }
        void SetText(string txt){ text = txt; }
        void SetTextSize(float ts) { textsize = ts; }

        int32_t GetXpos(void){ return xpos; }
        int32_t GetYpos(void){ return ypos; }
        int32_t GetWidth(void){ return width; }
        int32_t GetHeight(void){ return height; }
        uint32_t GetLineCol(void){ return linecol; }
        uint32_t GetBkgCol(void){ return bkgcol; }
        uint32_t GetFillCol(void){ return fillcol; }
        uint32_t GetTxtCol(void){ return txtcol; }
        float GetTextSize(void){ return textsize; }
        string GetText(void){ return text; }
        string GetID(void){ return id; }

    private:
        int32_t xpos, ypos, width, height;
        uint32_t linecol, fillcol, bkgcol, txtcol;
        float textsize;
        string text, id;
};

#endif // BUTTON_H
