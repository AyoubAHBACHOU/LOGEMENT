#pragma once
#include <iostream>
#include <string>
using namespace std;
namespace immob {
	class logementt
	{
	private:
		string adresse;
		int surfaceH;
		int nbrpiece;
	protected:
		double taux;
	public:
		logementt(string, int, int, double);
		bool cmp_log(const logementt& l) const;
		void afficher()const;
		virtual double taxe()const;
		

	};
}