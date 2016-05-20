#include "amoba_restart.hpp"

Amoba_Restart::Amoba_Restart(int X, int Y, int meret_X, int meret_Y, int Szoveg_meret, string Szoveg, function<void()> F)
    : Nyomogomb(X,Y,meret_X,meret_Y,Szoveg_meret,Szoveg){
        f = F;
}

void Amoba_Restart::keret(){
    gout.load_font("LiberationSans-Regular.ttf", szoveg_meret);
    gout << color(0,0,0) << move_to(x-1, y-1) << box(meret_x+2, meret_y+2) << color(190,190,190);
    gout << move_to(x, y) << box(meret_x, meret_y) << color(0,0,0);
    gout << move_to(x+(meret_x-gout.twidth(szoveg))/2, y+(meret_y-gout.cascent())/2) << text(szoveg);
}
void Amoba_Restart::valtoztat(genv::event ev) {
}

void Amoba_Restart::kapcsolas(){
    f();
}
