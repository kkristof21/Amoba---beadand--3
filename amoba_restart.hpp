#ifndef AMOBA_RESTART_HPP_INCLUDED
#define AMOBA_RESTART_HPP_INCLUDED

#include "nyomogomb.hpp"
#include <functional>

using namespace std;
using namespace genv;

class Amoba_Restart : public Nyomogomb {
protected:
    function<void()> f;
public:
    Amoba_Restart(int X, int Y, int meret_X, int meret_Y, int Szoveg_meret, string Szoveg, function<void()> F);
    virtual void keret();
    virtual void valtoztat(genv::event ev);
    virtual void kapcsolas();
};


#endif // AMOBA_RESTART_HPP_INCLUDED
