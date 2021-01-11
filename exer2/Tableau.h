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

	-Surd�finir �galement l�op�rateur[] pour qu�il permette d�acc�der aux �l�ments du
		tableau par r�f�rence, et ainsi autoriser la modification de ces �l�ments.*/

private:
	int *tab;
	int taille;

};

