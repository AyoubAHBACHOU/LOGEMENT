#include "Maison.h"

Maison::Maison(string a, int s, int nbr, double t, int st, bool pisc): logementt(a,s,nbr,t)
{
	this->surface_ter = st;
	this->piscine = pisc;
}

void Maison::afficher() const
{
	this->logementt::afficher();
	cout << "surface terrain:" << this->surface_ter << endl;
	cout << "avoir piscine:" << this->piscine << endl;
	
}

double Maison::taxe() const
{
	double res = this->logementt::taxe()*0.1;
	res += this->taux * this->surface_ter * 0.3;
	if (this->piscine)
		res += this->surface_ter * 0.01;
	return res;
}
