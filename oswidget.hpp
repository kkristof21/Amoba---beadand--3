#ifndef OSWIDGET_HPP_INCLUDED
#define OSWIDGET_HPP_INCLUDED

#include <graphics.hpp>

using namespace std;

class Oswidget{
protected:
    int x, y, meret_x, meret_y, eger_x, eger_y, szoveg_meret;
    string szoveg;
public:
    Oswidget(int X, int Y, int meret_X, int meret_Y, int Szoveg_meret, string Szoveg);
    bool kijelolt(genv::event ev);
    virtual void keret();
    virtual void valtoztat(genv::event ev);
    virtual bool korrekcio();
    virtual string kiiras();
};

#endif // OSWIDGET_HPP_INCLUDED
