#include "logementt.h"
#include <iostream>
using namespace std;

immob::logementt::logementt(string a, int s, int nbr, double t)
{
	this->adresse = a;
	this->surfaceH = s;
	this->nbrpiece = nbr;
	this->taux = t;
}

bool immob::logementt::cmp_log(const logementt& l) const
{
	if (this->adresse == l.adresse)
		return true;
	return false;
}

void immob::logementt::afficher() const
{
	cout << "adresse:" << this->adresse << endl;
	cout << "surface habitable:" << this->surfaceH << endl;
	cout << " nombre de piece:" << this->nbrpiece << endl;
	cout << "taux:" << this->taux << endl;
}

double immob::logementt::taxe() const
{
	return this->taux * this->surfaceH;
}
