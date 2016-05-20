#ifndef AMOBA_NEGYZET_HPP_INCLUDED
#define AMOBA_NEGYZET_HPP_INCLUDED

#include "nyomogomb.hpp"

using namespace std;
using namespace genv;

class Amoba_Negyzet : public Nyomogomb {
    int alap_r, alap_g, alap_b, szoveg_r, szoveg_g, szoveg_b;
public:
    Amoba_Negyzet(int X, int Y, int meret_X, int meret_Y, int Szoveg_meret, string Szoveg, int Alap_r, int Alap_g, int Alap_b);
    virtual void keret();
    virtual void valtoztat(genv::event ev);
    virtual void jeloles(int jel);
    virtual void Ujraindulas();
};


#endif // AMOBA_NEGYZET_HPP_INCLUDED
