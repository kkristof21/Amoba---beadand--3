#ifndef AMOBA_HPP_INCLUDED
#define AMOBA_HPP_INCLUDED

#include "graphics.hpp"
#include "amoba_negyzet.hpp"
#include "amoba_restart.hpp"
#include "jatekmester.hpp"
#include "szovegdoboz.hpp"
#include <vector>

using namespace genv;

class Amoba{
protected:
    vector<Amoba_Negyzet*> negyzetek;
    JatekMester *kezelo;
    Szovegdoboz *iranyito;
    Amoba_Restart *ujraindito;
    vector<int> kijeloltek;
public:
    Amoba();
    void Felulet();
    void Ujrainditas();
};

#endif // AMOBA_HPP_INCLUDED
