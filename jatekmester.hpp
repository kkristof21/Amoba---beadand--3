#ifndef JATEKMESTER_HPP_INCLUDED
#define JATEKMESTER_HPP_INCLUDED

#include <vector>

using namespace std;

class JatekMester{
protected:
    vector<int> jelsorszamok;
    int kovetkezik;
public:
    JatekMester();
    bool Jovahagyas(int jelolt);
    int Kovetkezik();
    bool GameOver(int jelolt, vector<int>& osszegyult);
    void Bejaras(int lepes, int jelolt, bool& betelt, int& szamlalo, vector<int>& osszegyult);
    void Ujraindulas(vector<int> kijeloltek);
};

#endif // JATEKMESTER_HPP_INCLUDED
