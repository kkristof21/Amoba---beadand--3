#include "jatekmester.hpp"

JatekMester::JatekMester(){
for(unsigned int i = 0; i < 40*40; i++){
        jelsorszamok.push_back(0);
    }
kovetkezik = -1;
}

bool JatekMester::Jovahagyas(int jelolt){
if (jelsorszamok[jelolt] == 0){
            jelsorszamok[jelolt] = -1*kovetkezik;
            return 1;
}
else {return 0;}
}

int JatekMester::Kovetkezik(){
kovetkezik = -1*kovetkezik;
return kovetkezik;
}

bool JatekMester::GameOver(int jelolt, vector<int>& osszegyult){
bool betelt = true;
int szamlalo = 1;
Bejaras(-1, jelolt, betelt, szamlalo, osszegyult);
if (szamlalo < 5){
    Bejaras(1, jelolt, betelt, szamlalo, osszegyult);
}

if (szamlalo < 5){
    szamlalo = 1;
    osszegyult.clear();
    Bejaras(-40, jelolt, betelt, szamlalo, osszegyult);
}
if (szamlalo < 5){
    Bejaras(40, jelolt, betelt, szamlalo, osszegyult);
}

if (szamlalo < 5){
    szamlalo = 1;
    osszegyult.clear();
    Bejaras(-41, jelolt, betelt, szamlalo, osszegyult);
}
if (szamlalo < 5){
    Bejaras(41, jelolt, betelt, szamlalo, osszegyult);
}

if (szamlalo < 5){
    szamlalo = 1;
    osszegyult.clear();
    Bejaras(-39, jelolt, betelt, szamlalo, osszegyult);
}
if (szamlalo < 5){
    Bejaras(39, jelolt, betelt, szamlalo, osszegyult);
}
if (szamlalo < 5){
    int i = 0;
    while (betelt == true and jelolt > 0 and jelolt < 1600){
    if (jelsorszamok[i] == 0){
        betelt = false;
    }
    i++;
    }
}
if (betelt == true){kovetkezik = 0;}
return betelt;
}

void JatekMester::Bejaras(int lepes, int jelolt, bool& betelt, int& szamlalo, vector<int>& osszegyult){
while (betelt == true and jelolt > 0 and jelolt < 1600){
    if (jelsorszamok[jelolt+lepes] == kovetkezik){
        szamlalo++;
        osszegyult.push_back(jelolt+lepes);
    }
    else {betelt = false;}
    jelolt+=lepes;
}
betelt = true;
}

void JatekMester::Ujraindulas(vector<int> kijeloltek){
for(size_t i = 0; i < kijeloltek.size(); i++){
        jelsorszamok[kijeloltek[i]] = 0;
    }
kovetkezik = -1;
}
