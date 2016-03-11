#ifndef GFX_LIB_H
#define GFX_LIB_H

#include "SDL.h"
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>

#define LetterSpace     1

using namespace std;

class GFX_Lib
{
    public:
        GFX_Lib();

        void Clear(void);

        int32_t PChar(uint16_t Ch, int32_t X, int32_t Y, float Size);
        int32_t PStr(const char *Str, int32_t X, int32_t Y, float Size);
        int32_t PStr(string Str, int32_t X, int32_t Y, float Size);
        int32_t PNum(int32_t Num, int32_t X, int32_t Y, uint8_t Padding, float Size);
        int32_t PNumF(float Num, int32_t X, int32_t Y, uint8_t Prec, float Size);
        void DrawLine(int x0, int y0, int x1, int y1, float wd);
        void DrawRectangle(int32_t Xs, int32_t Ys, int32_t Xe, int32_t Ye, float wd);
        void DrawFillRectangle(int32_t Xs, int32_t Ys, int32_t Xe, int32_t Ye, float wd);
        void DrawCircle(int32_t Xm, int32_t Ym, int32_t R);

        SDL_PixelFormat* PxFmt(void);

        uint8_t DrawBMPFN(char *Fn, int32_t X, int32_t Y, float Scale);
        uint8_t DrawBMP(SDL_Surface *img, int32_t X, int32_t Y, float Scale);

        void setSurface(SDL_Surface *surf);

        void SetTxtCol(uint32_t Col);
        void SetBkgCol(uint32_t Col);
        void SetLineCol(uint32_t Col);
        void SetFillCol(uint32_t Col);
        void SetScrnCol(uint32_t Col);

        uint32_t GetTxtCol(void);
        uint32_t GetBkgCol(void);
        uint32_t GetLineCol(void);
        uint32_t GetFillCol(void);
        uint32_t GetScrnCol(void);

    private:
        void drawPixRGBA(int32_t x, int32_t y, uint32_t col);
        uint32_t getpixel(SDL_Surface *surface, int x, int y);

        uint32_t XRes, YRes;
        uint32_t TxtCol, BkgCol, LineCol, FillCol, ScrnCol;
        SDL_Surface *s;
};

#endif // GFX_LIB_H
