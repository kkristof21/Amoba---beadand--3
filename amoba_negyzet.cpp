#include "amoba_negyzet.hpp"

Amoba_Negyzet::Amoba_Negyzet(int X, int Y, int meret_X, int meret_Y, int Szoveg_meret, string Szoveg, int Alap_r, int Alap_g, int Alap_b)
    : Nyomogomb(X,Y,meret_X,meret_Y,Szoveg_meret,Szoveg){
        alap_r = Alap_r;
        alap_g = Alap_g;
        alap_b = Alap_b;
        szoveg_r = 0; szoveg_g = 0; szoveg_b = 0;
}

void Amoba_Negyzet::keret(){
    gout.load_font("LiberationSans-Regular.ttf", szoveg_meret);
    gout << color(alap_r,alap_g,alap_b);
    gout << move_to(x, y) << box(meret_x, meret_y) << color(szoveg_r,szoveg_g,szoveg_b);
    gout << move_to(x+(meret_x-gout.twidth(szoveg))/2, y+(meret_y-gout.cascent())/2) << text(szoveg);
}
void Amoba_Negyzet::valtoztat(genv::event ev) {
    alap_b = 200;
}
void Amoba_Negyzet::jeloles(int jel){
if (jel == -1){szoveg = "X"; szoveg_r = 255;}
else if (jel == 1){szoveg = "O"; szoveg_b = 255;}
}

void Amoba_Negyzet::Ujraindulas(){
    szoveg = " ";
    szoveg_r = 0;
    szoveg_b = 0;
    alap_b = 0;
}
