#pragma once
#include "logementt.h"
using namespace immob;
class Maison :
    public logementt
{
private:
    int surface_ter;
    bool piscine;
public:
    Maison(string a, int s, int nbr, double t, int st, bool pisc);
    void afficher() const;
    double taxe() const override;
};

