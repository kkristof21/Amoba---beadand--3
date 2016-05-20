#include "oswidget.hpp"

using namespace genv;

Oswidget::Oswidget(int X, int Y, int meret_X, int meret_Y, int Szoveg_meret, string Szoveg){
    x = X;
    y = Y;
    meret_x = meret_X;
    meret_y = meret_Y;
    szoveg_meret = Szoveg_meret;
    szoveg = Szoveg;
}

bool Oswidget::kijelolt(event ev){
    eger_x = ev.pos_x;
    eger_y = ev.pos_y;
    return eger_x > x and eger_x < x + meret_x and eger_y > y and eger_y < y + meret_y;
}

void Oswidget::keret(){
}

void Oswidget::valtoztat(event ev){
}

bool Oswidget::korrekcio(){
}

string Oswidget::kiiras(){
}
