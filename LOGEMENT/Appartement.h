#pragma once
#include "logementt.h"
using namespace immob;
class Appartement :
    public logementt
{
private:
    int numetage;
public:
    Appartement(string, int, int, double, int);
    void afficher() const;
    double taxe() const override;
};

