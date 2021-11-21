#include "Quartier.h"

immob::Quartier::Quartier(string nom)
{
	this->nom = nom;
	this->list_log = vector<logementt*>();
}

bool immob::Quartier::log_existe(const logementt& l) const
{
	int taille = this->list_log.capacity();
	for (int i = 0; i < taille; i++)
	{
		if (this->list_log.at(i)->cmp_log(l)) return true;
	}
	return false;
}

void immob::Quartier::ajouter_log(logementt& l)
{
	if (!log_existe(l))
		this->list_log.push_back(&l);
}

void immob::Quartier::afficher_quart() const
{
	cout << this->nom << endl;
	int taille = this->list_log.capacity();
	for (int i = 0; i < taille; i++)
	{
		this->list_log.at(i)->afficher();
	}
}

double immob::Quartier::cumule_taxe() const
{
	double res = 0;
	for(int i=0;i<this->list_log.capacity();i++)
	{
		res += this->list_log.at(i)->taxe();
	}
	return res;
}


