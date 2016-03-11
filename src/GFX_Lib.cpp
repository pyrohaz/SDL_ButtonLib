#include "GFX_Lib.h"

const unsigned char Chars[] = {
    0x00, 0x00, 0x00, 0x00, 0x00 // 20
    ,0x00, 0x00, 0x5f, 0x00, 0x00 // 21 !
    ,0x00, 0x07, 0x00, 0x07, 0x00 // 22 "
    ,0x14, 0x7f, 0x14, 0x7f, 0x14 // 23 #
    ,0x24, 0x2a, 0x7f, 0x2a, 0x12 // 24 $
    ,0x23, 0x13, 0x08, 0x64, 0x62 // 25 %
    ,0x36, 0x49, 0x55, 0x22, 0x50 // 26 &
    ,0x00, 0x05, 0x03, 0x00, 0x00 // 27 '
    ,0x00, 0x1c, 0x22, 0x41, 0x00 // 28 (
    ,0x00, 0x41, 0x22, 0x1c, 0x00 // 29 )
    ,0x14, 0x08, 0x3e, 0x08, 0x14 // 2a *
    ,0x08, 0x08, 0x3e, 0x08, 0x08 // 2b +
    ,0x00, 0x50, 0x30, 0x00, 0x00 // 2c ,
    ,0x08, 0x08, 0x08, 0x08, 0x08 // 2d -
    ,0x00, 0x60, 0x60, 0x00, 0x00 // 2e .
    ,0x20, 0x10, 0x08, 0x04, 0x02 // 2f /
    ,0x3e, 0x51, 0x49, 0x45, 0x3e // 30 0
    ,0x00, 0x42, 0x7f, 0x40, 0x00 // 31 1
    ,0x42, 0x61, 0x51, 0x49, 0x46 // 32 2
    ,0x21, 0x41, 0x45, 0x4b, 0x31 // 33 3
    ,0x18, 0x14, 0x12, 0x7f, 0x10 // 34 4
    ,0x27, 0x45, 0x45, 0x45, 0x39 // 35 5
    ,0x3c, 0x4a, 0x49, 0x49, 0x30 // 36 6
    ,0x01, 0x71, 0x09, 0x05, 0x03 // 37 7
    ,0x36, 0x49, 0x49, 0x49, 0x36 // 38 8
    ,0x06, 0x49, 0x49, 0x29, 0x1e // 39 9
    ,0x00, 0x36, 0x36, 0x00, 0x00 // 3a :
    ,0x00, 0x56, 0x36, 0x00, 0x00 // 3b ;
    ,0x08, 0x14, 0x22, 0x41, 0x00 // 3c <
    ,0x14, 0x14, 0x14, 0x14, 0x14 // 3d =
    ,0x00, 0x41, 0x22, 0x14, 0x08 // 3e >
    ,0x02, 0x01, 0x51, 0x09, 0x06 // 3f ?
    ,0x32, 0x49, 0x79, 0x41, 0x3e // 40 @
    ,0x7e, 0x11, 0x11, 0x11, 0x7e // 41 A
    ,0x7f, 0x49, 0x49, 0x49, 0x36 // 42 B
    ,0x3e, 0x41, 0x41, 0x41, 0x22 // 43 C
    ,0x7f, 0x41, 0x41, 0x22, 0x1c // 44 D
    ,0x7f, 0x49, 0x49, 0x49, 0x41 // 45 E
    ,0x7f, 0x09, 0x09, 0x09, 0x01 // 46 F
    ,0x3e, 0x41, 0x49, 0x49, 0x7a // 47 G
    ,0x7f, 0x08, 0x08, 0x08, 0x7f // 48 H
    ,0x00, 0x41, 0x7f, 0x41, 0x00 // 49 I
    ,0x20, 0x40, 0x41, 0x3f, 0x01 // 4a J
    ,0x7f, 0x08, 0x14, 0x22, 0x41 // 4b K
    ,0x7f, 0x40, 0x40, 0x40, 0x40 // 4c L
    ,0x7f, 0x02, 0x0c, 0x02, 0x7f // 4d M
    ,0x7f, 0x04, 0x08, 0x10, 0x7f // 4e N
    ,0x3e, 0x41, 0x41, 0x41, 0x3e // 4f O
    ,0x7f, 0x09, 0x09, 0x09, 0x06 // 50 P
    ,0x3e, 0x41, 0x51, 0x21, 0x5e // 51 Q
    ,0x7f, 0x09, 0x19, 0x29, 0x46 // 52 R
    ,0x46, 0x49, 0x49, 0x49, 0x31 // 53 S
    ,0x01, 0x01, 0x7f, 0x01, 0x01 // 54 T
    ,0x3f, 0x40, 0x40, 0x40, 0x3f // 55 U
    ,0x1f, 0x20, 0x40, 0x20, 0x1f // 56 V
    ,0x3f, 0x40, 0x38, 0x40, 0x3f // 57 W
    ,0x63, 0x14, 0x08, 0x14, 0x63 // 58 X
    ,0x07, 0x08, 0x70, 0x08, 0x07 // 59 Y
    ,0x61, 0x51, 0x49, 0x45, 0x43 // 5a Z
    ,0x00, 0x7f, 0x41, 0x41, 0x00 // 5b [
    ,0x02, 0x04, 0x08, 0x10, 0x20 // 5c
    ,0x00, 0x41, 0x41, 0x7f, 0x00 // 5d ]
    ,0x04, 0x02, 0x01, 0x02, 0x04 // 5e ^
    ,0x40, 0x40, 0x40, 0x40, 0x40 // 5f _
    ,0x00, 0x01, 0x02, 0x04, 0x00 // 60 `
    ,0x20, 0x54, 0x54, 0x54, 0x78 // 61 a
    ,0x7f, 0x48, 0x44, 0x44, 0x38 // 62 b
    ,0x38, 0x44, 0x44, 0x44, 0x20 // 63 c
    ,0x38, 0x44, 0x44, 0x48, 0x7f // 64 d
    ,0x38, 0x54, 0x54, 0x54, 0x18 // 65 e
    ,0x08, 0x7e, 0x09, 0x01, 0x02 // 66 f
    ,0x0c, 0x52, 0x52, 0x52, 0x3e // 67 g
    ,0x7f, 0x08, 0x04, 0x04, 0x78 // 68 h
    ,0x00, 0x44, 0x7d, 0x40, 0x00 // 69 i
    ,0x20, 0x40, 0x44, 0x3d, 0x00 // 6a j
    ,0x7f, 0x10, 0x28, 0x44, 0x00 // 6b k
    ,0x00, 0x41, 0x7f, 0x40, 0x00 // 6c l
    ,0x7c, 0x04, 0x18, 0x04, 0x78 // 6d m
    ,0x7c, 0x08, 0x04, 0x04, 0x78 // 6e n
    ,0x38, 0x44, 0x44, 0x44, 0x38 // 6f o
    ,0x7c, 0x14, 0x14, 0x14, 0x08 // 70 p
    ,0x08, 0x14, 0x14, 0x18, 0x7c // 71 q
    ,0x7c, 0x08, 0x04, 0x04, 0x08 // 72 r
    ,0x48, 0x54, 0x54, 0x54, 0x20 // 73 s
    ,0x04, 0x3f, 0x44, 0x40, 0x20 // 74 t
    ,0x3c, 0x40, 0x40, 0x20, 0x7c // 75 u
    ,0x1c, 0x20, 0x40, 0x20, 0x1c // 76 v
    ,0x3c, 0x40, 0x30, 0x40, 0x3c // 77 w
    ,0x44, 0x28, 0x10, 0x28, 0x44 // 78 x
    ,0x0c, 0x50, 0x50, 0x50, 0x3c // 79 y
    ,0x44, 0x64, 0x54, 0x4c, 0x44 // 7a z
    ,0x00, 0x08, 0x36, 0x41, 0x00 // 7b {
    ,0x00, 0x00, 0x7f, 0x00, 0x00 // 7c |
    ,0x00, 0x41, 0x36, 0x08, 0x00 // 7d }
    ,0x10, 0x08, 0x08, 0x10, 0x08 // 7e
    ,0x78, 0x46, 0x41, 0x46, 0x78 // 7f
    ,0xFF, 0x00, 0x00, 0x00, 0x00 // Current char line
};

GFX_Lib::GFX_Lib() {
    TxtCol = 0;
    BkgCol = 0;
    LineCol = 0;
    FillCol = 0;
    ScrnCol = 0;
}

void GFX_Lib::Clear(void){
    SDL_FillRect(s, NULL, ScrnCol);
}

SDL_PixelFormat* GFX_Lib::PxFmt(void) {
    return s->format;
}

void GFX_Lib::setSurface(SDL_Surface *surf) {
    s = surf;
    YRes = s->h;
    XRes = s->w;
}

void GFX_Lib::SetTxtCol(uint32_t Col) {
    TxtCol = Col;
}

void GFX_Lib::SetBkgCol(uint32_t Col) {
    BkgCol = Col;
}

void GFX_Lib::SetLineCol(uint32_t Col) {
    LineCol = Col;
}

void GFX_Lib::SetFillCol(uint32_t Col) {
    FillCol = Col;
}

void GFX_Lib::SetScrnCol(uint32_t Col) {
    ScrnCol = Col;
}



uint32_t GFX_Lib::GetTxtCol(void) {
    return TxtCol;
}

uint32_t GFX_Lib::GetBkgCol(void) {
    return BkgCol;
}

uint32_t GFX_Lib::GetLineCol(void) {
    return LineCol;
}

uint32_t GFX_Lib::GetFillCol(void) {
    return FillCol;
}

uint32_t GFX_Lib::GetScrnCol(void){
    return ScrnCol;
}

void GFX_Lib::drawPixRGBA(int32_t x, int32_t y, uint32_t col) {
    uint32_t *pix = (uint32_t *) s->pixels;
    if(x<s->w && y<s->h) pix[(y*s->w)+x] = col;
}

int32_t GFX_Lib::PChar(uint16_t Ch, int32_t X, int32_t Y, float Size) {
    uint32_t XCnt, YCnt, CharAddr, YPos;

    if(Ch<0x20) return X;
    Ch-=0x20;
    Ch*=5;

    if(Y >= (YRes-(8*(Size)))) {
        Y = (YRes-(8*(Size)))-1;
    }

    if(X >= (XRes-(5*(Size)))) {
        X = (XRes-(5*(Size)))-1;
    }

    for(YCnt = 0; YCnt<8*(Size); YCnt++) {
        for(XCnt = 0; XCnt<(5*(Size)) + LetterSpace; XCnt++) {
            CharAddr = XCnt/(Size);
            YPos = YCnt/(Size);
            if(XCnt<(5*(Size)) && (Chars[Ch+CharAddr] & (1UL<<YPos)))  drawPixRGBA(X+XCnt, Y+YCnt, TxtCol);
            else drawPixRGBA(X+XCnt, Y+YCnt, BkgCol);
        }
    }

    return X+(Size)*5+LetterSpace;
}

int32_t GFX_Lib::PStr(const char *Str, int32_t X, int32_t Y, float Size) {
    while(*Str) {
        X = PChar(*Str, X, Y, Size);
        Str++;
    }

    return X;
}

int32_t GFX_Lib::PStr(string Str, int32_t X, int32_t Y, float Size){
    return PStr(Str.c_str(), X, Y, Size);
}

int32_t GFX_Lib::PNum(int32_t Num, int32_t X, int32_t Y, uint8_t Padding, float Size) {
    char NBuf[15] = {0};
    char SNStr[4] = "%0i";

    SNStr[1] = Padding + '0';
    sprintf(NBuf, SNStr, Num);
    return PStr(NBuf, X, Y, Size);
}

int32_t GFX_Lib::PNumF(float Num, int32_t X, int32_t Y, uint8_t Prec, float Size) {
    char NBuf[15] = {0};
    char SNStr[5] = "%.0f";

    SNStr[2] = Prec + '0';
    sprintf(NBuf, SNStr, Num);
    return PStr(NBuf, X, Y, Size);
}

void GFX_Lib::DrawLine(int x0, int y0, int x1, int y1, float wd) {
    int dx = abs(x1-x0), sx = x0 < x1 ? 1 : -1;
    int dy = abs(y1-y0), sy = y0 < y1 ? 1 : -1;
    int err = dx-dy, e2, x2, y2;                          /* error value e_xy */
    float ed = dx+dy == 0 ? 1 : sqrt((float)dx*dx+(float)dy*dy);

    for (wd = (wd+1)/2; ; ) {                                   /* pixel loop */
        drawPixRGBA(x0,y0,LineCol);
        e2 = err;
        x2 = x0;
        if (2*e2 >= -dx) {                                           /* x step */
            for (e2 += dy, y2 = y0; e2 < ed*wd && (y1 != y2 || dx > dy); e2 += dx)
                drawPixRGBA(x0, y2 += sy, LineCol);
            if (x0 == x1) break;
            e2 = err;
            err -= dy;
            x0 += sx;
        }
        if (2*e2 <= dy) {                                            /* y step */
            for (e2 = dx-e2; e2 < ed*wd && (x1 != x2 || dx < dy); e2 += dy)
                drawPixRGBA(x2 += sx, y0, LineCol);
            if (y0 == y1) break;
            err += dx;
            y0 += sy;
        }
    }
}

void GFX_Lib::DrawCircle(int32_t Xm, int32_t Ym, int32_t R) {
    int x = -R, y = 0, err = 2-2*R; /* II. Quadrant */
    do {
        drawPixRGBA(Xm-x, Ym+y, LineCol); /*   I. Quadrant */
        drawPixRGBA(Xm-y, Ym-x, LineCol); /*  II. Quadrant */
        drawPixRGBA(Xm+x, Ym-y, LineCol); /* III. Quadrant */
        drawPixRGBA(Xm+y, Ym+x, LineCol); /*  IV. Quadrant */
        R = err;
        if (R <= y) err += ++y*2+1;           /* e_xy+e_y < 0 */
        if (R > x || err > y) err += ++x*2+1; /* e_xy+e_x > 0 or no 2nd y-step */
    } while (x < 0);
}

void GFX_Lib::DrawRectangle(int32_t Xs, int32_t Ys, int32_t Xe, int32_t Ye, float wd) {
    DrawLine(Xs, Ys, Xs, Ye, wd);
    DrawLine(Xe, Ys, Xe, Ye, wd);
    DrawLine(Xs, Ys, Xe, Ys, wd);
    DrawLine(Xs, Ye, Xe, Ye, wd);
}

void GFX_Lib::DrawFillRectangle(int32_t Xs, int32_t Ys, int32_t Xe, int32_t Ye, float wd) {
    uint32_t x, y;

    for(y = Ys+wd/2-1; y<Ye-wd/2; y++) {
        for(x = Xs+wd/2-1; x<Xe-wd/2; x++) {
            drawPixRGBA(x, y, FillCol);
        }
    }
    DrawRectangle(Xs, Ys, Xe, Ye, wd);
}

uint32_t GFX_Lib::getpixel(SDL_Surface *surface, int x, int y) {
    int bpp = surface->format->BytesPerPixel;
    /* Here p is the address to the pixel we want to retrieve */
    Uint8 *p = (Uint8 *)surface->pixels + y * surface->pitch + x * bpp;

    switch(bpp) {
    case 1:
        return *p;

    case 2:
        return *(Uint16 *)p;

    case 3:
        if(SDL_BYTEORDER == SDL_BIG_ENDIAN)
            return p[0] << 16 | p[1] << 8 | p[2];
        else
            return p[0] | p[1] << 8 | p[2] << 16;

    case 4:
        return *(Uint32 *)p;

    default:
        return 0;       /* shouldn't happen, but avoids warnings */
    }
}

uint8_t GFX_Lib::DrawBMPFN(char *Fn, int32_t X, int32_t Y, float Scale) {
    float x, y;
    float xc, yc;
    uint32_t Pix;
    SDL_Surface *img = SDL_LoadBMP(Fn);

    if(img == NULL) return 1;

    xc = img->w*Scale;
    yc = img->h*Scale;

    for(y = 0; y<yc; y++) {
        for(x = 0; x<xc; x++) {
            Pix = getpixel(img, (uint32_t)x/Scale, (uint32_t)y/Scale);
            if(Pix != 0xFFFFFF) drawPixRGBA(X+x, Y+y, Pix);
        }
    }

    SDL_FreeSurface(img);

    return 0;
}


uint8_t GFX_Lib::DrawBMP(SDL_Surface *img, int32_t X, int32_t Y, float Scale) {
    float x, y;
    float xc, yc;
    uint32_t Pix;
    if(img == NULL) return 1;

    xc = img->w*Scale;
    yc = img->h*Scale;

    for(y = 0; y<yc; y++) {
        for(x = 0; x<xc; x++) {
            Pix = getpixel(img, (uint32_t)x/Scale, (uint32_t)y/Scale);
            if(Pix != 0xFFFFFF) drawPixRGBA(X+x, Y+y, Pix);
        }
    }

    return 0;
}
