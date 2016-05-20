#ifndef NYOMOGOMB_HPP_INCLUDED
#define NYOMOGOMB_HPP_INCLUDED

#include "oswidget.hpp"

using namespace std;
using namespace genv;

class Nyomogomb : public Oswidget {
protected:
    bool lenyomva;
public:
    Nyomogomb(int X, int Y, int meret_X, int meret_Y, int Szoveg_meret, string Szoveg);
    virtual void keret();
    virtual void valtoztat(genv::event ev);
};


#endif // NYOMOGOMB_HPP_INCLUDED
