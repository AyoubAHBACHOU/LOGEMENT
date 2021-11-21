#include "Appartement.h"
#include <iostream>

Appartement::Appartement(string a, int s, int nbr, double t, int num): logementt(a,s,nbr,t)
{
	this->numetage = num;
}

void Appartement::afficher() const
{
	this->logementt::afficher();
	cout << "numero d'etage:" << this->numetage << endl;
}

double Appartement::taxe() const
{
	double res = this->logementt::taxe();
	return res;
}
