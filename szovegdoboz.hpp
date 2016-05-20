#ifndef SZOVEGDOBOZ_HPP_INCLUDED
#define SZOVEGDOBOZ_HPP_INCLUDED

#include "oswidget.hpp"
#include <string>

using namespace std;
using namespace genv;

class Szovegdoboz : public Oswidget {
public:
    Szovegdoboz(int X, int Y, int meret_X, int meret_Y, int Szoveg_meret, string Szoveg);
    virtual void keret() const ;
    virtual void Szovegeles(string Szoveg);
    virtual void Ujraindulas();
};

#endif // SZOVEGDOBOZ_HPP_INCLUDED
