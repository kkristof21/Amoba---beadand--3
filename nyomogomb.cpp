#include "nyomogomb.hpp"

Nyomogomb::Nyomogomb(int X, int Y, int meret_X, int meret_Y, int Szoveg_meret, string Szoveg)
    : Oswidget(X,Y,meret_X,meret_Y, Szoveg_meret, Szoveg){
    lenyomva = false;
}

void Nyomogomb::keret(){
    gout.load_font("LiberationSans-Regular.ttf", szoveg_meret);
    if (lenyomva == true){}
    else
    gout << color(0,0,0);
    gout << move_to(x, y) << box(meret_x, meret_y) << color(255,255,255);
    gout << move_to(x+(meret_x-gout.twidth(szoveg))/2, y+(meret_y-gout.cascent())/2) << text(szoveg);
}
void Nyomogomb::valtoztat(genv::event ev) {
    if (ev.button == btn_left and kijelolt(ev)){
            lenyomva = true;
        }
    if (ev.button == -btn_left or !kijelolt(ev)){
            lenyomva = false;
        }
}
