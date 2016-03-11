#include "Button.h"

Button::Button(){

}

#define XRES       800
#define YRES        600

Button::Button(string idi, int32_t xp, int32_t yp, uint32_t lcol, uint32_t fcol, uint32_t bcol, uint32_t tcol, float tsize, string txt){
    if(xp<6) xp = 6;
    if(yp<6) yp = 6;

    id = idi;
    xpos = xp;
    ypos = yp;
    linecol = lcol;
    fillcol = fcol;
    bkgcol = bcol;
    txtcol = tcol;
    textsize = tsize;
    text = txt;

    width = (text.length()+2)*5*textsize+LetterSpace;
    height = 8*textsize;

    if(width+xpos+4>XRES) xpos = (XRES-(width+4));
    if(height+ypos+4>YRES) ypos = (YRES-(height+4));
}

Button::~Button(){

}

Button& Button::operator=(const Button &src){

    if(this == &src) return *this;

    xpos = src.xpos;
    ypos = src.ypos;
    width = src.width;
    height = src.height;
    linecol = src.linecol;
    bkgcol = src.bkgcol;
    txtcol = src.txtcol;
    text = src.text;

    return *this;
}
