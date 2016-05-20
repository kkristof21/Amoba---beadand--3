#include "amoba.hpp"

Amoba::Amoba(){
kezelo = new JatekMester();
for(unsigned int i = 0; i < 40; i++){
    for(unsigned int j = 0; j < 40; j++){
        Amoba_Negyzet *temp = new Amoba_Negyzet(1+j*15, 1+i*15, 14, 14, 12, " ", 255, 165, 0);
        negyzetek.push_back(temp);
    }
}
ujraindito = new Amoba_Restart(631, 280, 140, 50, 19, "Ujrainditas!", [=](){Ujrainditas();});
iranyito = new Szovegdoboz(601, 180, 200, 100, 19, "'O' jatekos kovetkezik");
}

void Amoba::Felulet(){
gout.open(801,601);
event ev;
bool vege = false;
int aktiv = -1;
vector<int> osszegyult;
for(size_t i = 0; i < negyzetek.size(); i++){
    negyzetek[i]->keret();
}
gout << move_to(601,0) << color(135,206,250) << box(200,600);
iranyito->keret();
gout << refresh;
while(gin >> ev and ev.keycode != key_escape){
if (ev.button == btn_left){
    for(size_t i = 0; i < negyzetek.size(); i++){
                if(negyzetek[i]->kijelolt(ev)){
                        aktiv = i;
                }
}}
if (ev.button == btn_left and aktiv > -1 and kezelo->Jovahagyas(aktiv) and !vege) {
            gout << move_to(601,0) << color(135,206,250) << box(200,600);
            kijeloltek.push_back(aktiv);
            int kovetkezik = kezelo->Kovetkezik();
            negyzetek[aktiv]->jeloles(kovetkezik);
            negyzetek[aktiv]->keret();
            if (kezelo->GameOver(aktiv, osszegyult)){
               osszegyult.push_back(aktiv);
               for (size_t i = 0; i < osszegyult.size(); i++){
                negyzetek[osszegyult[i]]->valtoztat(ev);
                negyzetek[osszegyult[i]]->keret();
               }
               iranyito->Szovegeles("A jateknak vege!");
               ujraindito->keret();
               vege = true;
               }
            else {
            if (kovetkezik == -1){iranyito->Szovegeles("'O' jatekos kovetkezik");}
            else if (kovetkezik == 1){iranyito->Szovegeles("'X' jatekos kovetkezik");}
            }
            iranyito->keret();
            gout << refresh;
}
if (ev.button == btn_left and vege){
    if (ujraindito->kijelolt(ev)){
            vege = false;
            aktiv = -1;
            for (size_t i = 0; i < osszegyult.size()-1; i++){
                negyzetek[osszegyult[i]]->Ujraindulas();
            }
            osszegyult.clear();
            ujraindito->kapcsolas();
            }
}
}
}

void Amoba::Ujrainditas(){
    for(size_t i = 0; i < kijeloltek.size(); i++){
            negyzetek[kijeloltek[i]]->Ujraindulas();
            negyzetek[kijeloltek[i]]->keret();
            }
    kezelo->Ujraindulas(kijeloltek);
    iranyito->Ujraindulas();
    gout << move_to(601,0) << color(135,206,250) << box(200,600);
    iranyito->keret();
    gout << refresh;
}
