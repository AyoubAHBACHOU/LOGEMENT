#pragma once
#include "logementt.h"
#include <iostream>
#include <vector>

namespace immob {
	class Quartier
	{
	private:
		string nom;
		vector<logementt*> list_log;
	public:
		Quartier(string nom);
		bool log_existe(const logementt& l) const;
		void ajouter_log(logementt&);
		void afficher_quart() const;
		double cumule_taxe() const;
	};
}
