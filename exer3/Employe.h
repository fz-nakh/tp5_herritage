#pragma once
#include <string>
#include<iostream>
using namespace std;
class Employe
{
public:
	Employe();
	Employe(string nom,int matricule,int indice_salarial);
	Employe(const Employe & e);
	int salaire(int aug);//multipliant cet indice par une certaine valeur qui peut changer en cas d�augmentation g�n�raledes salaires
	void afficher();
		
		/*2. Certains employ�s ont des responsabilit�s hi�rarchiques.Ils ont sous leurs ordres
		d�autres employ�s.Ecrivez une sous - classe des employ�s qui repr�sente ces
		responsables en enregistrant leurs inf�rieurs hi�rarchiques directs dans un tableau.
		Ecrivez une m�thode qui affiche les inf�rieurs directs(plac�s directement sous leurs
			ordres) et une autre qui affiche les employ�s inf�rieurs directs ou indirects(c�est � dire
				les subordonn�s des subordonn�s).On suppose que la hi�rarchie de l�entreprise en
		pyramidale*/

private:
	static int compt;
	string nom;
	int matricule;// (qui l�identifie de fa�on unique)
	int indice_salarial,sal;
};

