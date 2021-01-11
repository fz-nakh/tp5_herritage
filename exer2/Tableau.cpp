#include "Tableau.h"

Tableau::Tableau():taille(0)
{
	this->tab = new int[this->taille];
}

Tableau::~Tableau()
{
	delete[] this->tab;
}

Tableau::Tableau(const Tableau& t):taille(t.taille)
{
	this->tab = new int[this->taille];
	for(int i=0;i<this->taille;i++)
		this->tab[i] = t.tab[i];
}

Tableau Tableau::operator=(const Tableau& t)
{
	if (this != &t) {
		this->taille = t.taille;
		this->tab = new int[this->taille];
		for (int i = 0; i < this->taille; i++)
			this->tab[i] = t.tab[i];
		return *this;
	}
	else
		return *this;
}
