#pragma once
#include<iostream>
using namespace std;
class Tableau
{
public:
	Tableau(); 
	~Tableau();
	Tableau(const Tableau &t );
	Tableau operator=(const Tableau& t);
	/*-

	-Surdéfinir également l’opérateur[] pour qu’il permette d’accéder aux éléments du
		tableau par référence, et ainsi autoriser la modification de ces éléments.*/

private:
	int *tab;
	int taille;

};

