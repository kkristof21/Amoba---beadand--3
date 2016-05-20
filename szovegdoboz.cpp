#include "szovegdoboz.hpp"

Szovegdoboz::Szovegdoboz(int X, int Y, int meret_X, int meret_Y, int Szoveg_meret, string Szoveg)
    : Oswidget(X,Y,meret_X,meret_Y, Szoveg_meret, Szoveg) {
}
void Szovegdoboz::keret() const {
    gout.load_font("LiberationSans-Regular.ttf", szoveg_meret);
    gout << color(255,255,255) << move_to(x+(meret_x-gout.twidth(szoveg))/2, y+(meret_y-gout.cascent())/2) << text(szoveg);
}

void Szovegdoboz::Szovegeles(string Szoveg){
    szoveg=Szoveg;
}

void Szovegdoboz::Ujraindulas(){
    szoveg = "'O' jatekos kovetkezik";
}
